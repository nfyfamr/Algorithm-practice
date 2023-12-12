#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void find_group(int x, int y, vector<vector<bool>> &farm)
{
    vector<pair<int, int>> path;
    path.push_back({x, y});
    while (!path.empty())
    {
        auto p = path.back();
        path.pop_back();

        if (p.first > 0 && farm[p.first - 1][p.second])
        {
            path.push_back({p.first - 1, p.second});
            farm[p.first - 1][p.second] = false;
        }
        if (p.second > 0 && farm[p.first][p.second - 1])
        {
            path.push_back({p.first, p.second - 1});
            farm[p.first][p.second - 1] = false;
        }
        if (p.first < farm.size() - 1 && farm[p.first + 1][p.second])
        {
            path.push_back({p.first + 1, p.second});
            farm[p.first + 1][p.second] = false;
        }
        if (p.second < farm[0].size() - 1 && farm[p.first][p.second + 1])
        {
            path.push_back({p.first, p.second + 1});
            farm[p.first][p.second + 1] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int m, n, k;
        cin >> m >> n >> k;

        vector<vector<bool>> farm(m, vector<bool>(n, false));
        for (int i = 0, x, y; i < k; ++ i)
        {
            cin >> x >> y;
            farm[x][y] = true;
        }

        int worm = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (farm[i][j])
                {
                    find_group(i, j, farm);
                    ++worm;
                }
            }
        }

        cout << worm << '\n';
    }
}
