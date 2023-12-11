#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n;
    vector<pair<int,int>> coords(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        coords[i] = make_pair(x, y);
    }

    sort(coords.begin(), coords.end(), [](const auto &a, const auto &b) {
        if (a.second != b.second) return a.second < b.second;
        else return a.first < b.first;
    });
    for (auto &c : coords) cout << c.first << ' ' << c.second << '\n';
}
