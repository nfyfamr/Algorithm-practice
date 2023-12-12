#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

constexpr unsigned int TIME_MAX{ UINT_MAX };

int time_platten(int height, int bag, const vector<vector<int>> &tiles)
{
    unsigned int t = 0;
    for (int i = 0, diff; i < tiles.size(); ++i)
    {
        for (int j = 0; j < tiles[0].size(); ++j)
        {
            diff = tiles[i][j] - height;
            bag += diff;
            t += (diff > 0 ? diff * 2 : -1 * diff);
        }
    }
    if (bag < 0) return TIME_MAX;
    else return t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, b;
    cin >> n >> m >> b;

    vector<vector<int>> tiles(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> tiles[i][j];
        }
    }

    vector<unsigned int> time(257, TIME_MAX);
    for (int i = 0; i < 257; ++i)
    {
        time[i] = time_platten(i, b, tiles);
    }
    auto iter = min_element(time.rbegin(), time.rend());
    cout << *iter << " " << iter.base() - 1 - time.begin();
}
