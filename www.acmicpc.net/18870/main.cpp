#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<tuple>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // index, coord, new_coord
    vector<tuple<int, int, int>> coords (n);
    for (int i = 0, c; i < n; ++i)
    {
        cin >> c;
        coords[i] = make_tuple(i, c, 0);
    }

    sort(coords.begin(), coords.end(), [](const auto &a, const auto &b) {
        return get<1>(a) < get<1>(b);
    });
    for (auto it = coords.begin() + 1; it < coords.end(); ++it)
    {
        if (get<1>(*(it - 1)) < get<1>(*it))
            get<2>(*it) = get<2>(*(it - 1)) + 1;
        else
            get<2>(*it) = get<2>(*(it - 1));
    }
    sort(coords.begin(), coords.end(), [](const auto &a, const auto &b) {
        return get<0>(a) < get<0>(b);
    });

    for (auto &c : coords)
    {
        cout << get<2>(c) << " ";
    }
}
