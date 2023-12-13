#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges(n + 1);
    for (auto &node : edges) node.reserve(n);

    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    vector<char> not_visited(n + 1, 1);
    not_visited[0] = 0;
    int cnt = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        if (not_visited[i] == 0) continue;

        // bfs
        queue<int> q, next_q;
        q.push(i);
        not_visited[i] = 0;
        ++cnt;

        while (!q.empty())
        {
            while (!q.empty())
            {
                auto u = q.front();
                q.pop();

                for (auto &v : edges[u])
                {
                    if (not_visited[v])
                    {
                        not_visited[v] = 0;
                        next_q.push(v);
                    }
                }
            }

            swap(q, next_q);
        }
    }

    cout << cnt;
}
