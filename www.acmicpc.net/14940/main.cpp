#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> map(n, vector<char>(m, 0));
    vector<vector<int>> dist(n, vector<int>(m, -1));
    pair<int,int> goal;
    for (int i = 0, c; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> c;
            map[i][j] = c;
            if (c == 0) dist[i][j] = 0;
            if (c == 2) goal = make_pair(i, j);
        }
    }

    // bfs

    queue<pair<int,int>> q, next_q;
    q.push(goal);
    dist[goal.first][goal.second] = 0;
    while (!q.empty())
    {
        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            int x = p.first, y = p.second;

            if (x > 0 && map[x - 1][y] == 1 && dist[x - 1][y] == -1)
            {
                next_q.push({x - 1, y});
                dist[x - 1][y] = dist[x][y] + 1;
            }
            if (y > 0 && map[x][y - 1] == 1 && dist[x][y - 1] == -1)
            {
                next_q.push({x, y - 1});
                dist[x][y - 1] = dist[x][y] + 1;
            }
            if (x < n - 1 && map[x + 1][y] == 1 && dist[x + 1][y] == -1)
            {
                next_q.push({x + 1, y});
                dist[x + 1][y] = dist[x][y] + 1;
            }
            if (y < m - 1 && map[x][y + 1] == 1 && dist[x][y + 1] == -1)
            {
                next_q.push({x, y + 1});
                dist[x][y + 1] = dist[x][y] + 1;
            }
        }

        swap(q, next_q);
    }

    for (auto &rows : dist)
    {
        for (auto it = rows.begin(); it != rows.end(); ++it)
            cout << *it << " ";
        cout << '\n';
    }
}
