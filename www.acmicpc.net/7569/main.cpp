#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;

int count_day(vector<vector<vector<int>>> &box)
{
    int n = box.size(), m = box[0].size(), h = box[0][0].size();
    queue<tuple<int, int, int>> next_q, q;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            for (int k = 0; k < h; ++k)
                if (box[i][j][k] == 1) q.push({i, j, k});

    int day = 0;
    while (!q.empty())
    {
        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            int x = get<0>(p), y = get<1>(p), z = get<2>(p);

            if (x > 0 && box[x - 1][y][z] == 0)
            {
                next_q.push({x - 1, y, z});
                box[x - 1][y][z] = 1;
            }
            if (y > 0 && box[x][y - 1][z] == 0)
            {
                next_q.push({x, y - 1, z});
                box[x][y - 1][z] = 1;
            }
            if (z > 0 && box[x][y][z - 1] == 0)
            {
                next_q.push({x, y, z - 1});
                box[x][y][z - 1] = 1;
            }
            if (x < n - 1 && box[x + 1][y][z] == 0)
            {
                next_q.push({x + 1, y, z});
                box[x + 1][y][z] = 1;
            }
            if (y < m - 1 && box[x][y + 1][z] == 0)
            {
                next_q.push({x, y + 1, z});
                box[x][y + 1][z] = 1;
            }
            if (z < h - 1 && box[x][y][z + 1] == 0)
            {
                next_q.push({x, y, z + 1});
                box[x][y][z + 1] = 1;
            }
        }
        ++day;
        if (next_q.empty()) --day;
        swap(q, next_q);
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            for (int k = 0; k < h; ++k)
                if (box[i][j][k] == 0) return -1;
    return day;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, h;
    cin >> n >> m >> h;
    vector<vector<vector<int>>> box(n, vector<vector<int>>(m, vector<int>(h, 0)));
    for (int k = 0; k < h; ++k)
        for (int j = 0; j < m; ++j)
            for (int i = 0; i < n; ++i)
                cin >> box[i][j][k];

    cout << count_day(box);
}
