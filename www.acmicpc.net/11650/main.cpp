#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector<pair<int, int>> coord;
    coord.reserve(100'000);

    cin >> N;
    for (int i = 0, x, y; i < N; ++i)
    {
        cin >> x >> y;
        coord.push_back(make_pair(x, y));
    }

    sort(coord.begin(), coord.end(), [](const auto &a, const auto &b)
    {
        if (a.first == b.first) return a.second < b.second;
        else return a.first < b.first;
    });

    for (auto &c : coord)
    {
        cout << c.first << " " << c.second << '\n';
    }
}
