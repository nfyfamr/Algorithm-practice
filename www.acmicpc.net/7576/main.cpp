#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>
using namespace std;

int count_day(vector<vector<int>> &box)
{
    queue<pair<int, int>> next_q, q;
    for (int i = 0; i < box.size(); ++i)
    {
        for (int j = 0; j < box[0].size(); ++j)
        {
            if (box[i][j] == 1) next_q.push({i, j});
        }
    }

    int day = 0;
    while (!next_q.empty())
    {
        swap(q, next_q);
        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            if (p.first > 0 && box[p.first - 1][p.second] == 0)
            {
                next_q.push({p.first - 1, p.second});
                box[p.first - 1][p.second] = 1;
            }
            if (p.second > 0 && box[p.first][p.second - 1] == 0)
            {
                next_q.push({p.first, p.second - 1});
                box[p.first][p.second - 1] = 1;
            }
            if (p.first < box.size() - 1 && box[p.first + 1][p.second] == 0)
            {
                next_q.push({p.first + 1, p.second});
                box[p.first + 1][p.second] = 1;
            }
            if (p.second < box[0].size() - 1 && box[p.first][p.second + 1] == 0)
            {
                next_q.push({p.first, p.second + 1});
                box[p.first][p.second + 1] = 1;
            }
        }
        ++day;
        if (next_q.empty()) --day;
    }

    for (auto &rows : box)
    {
        auto it = find(rows.begin(), rows.end(), 0);
        if (it != rows.end()) return -1;
    }
    return day;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> m >> n;
    vector<vector<int>> box(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> box[i][j];

    cout << count_day(box);
}
