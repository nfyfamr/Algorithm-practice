#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>
#include<numeric>
using namespace std;

char find_color_group(vector<vector<char>>& grid, vector<vector<char>>& visits, int N, int x, int y)
{
    // bfs
    char curr_color = grid[x][y];
    queue<pair<int,int>> q, next_q;
    q.push({x, y});
    visits[x][y] = 1;

    vector<pair<int,int>> corner_offset = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    while (!q.empty())
    {
        while (!q.empty())
        {
            int x = q.front().first, y = q.front().second;
            q.pop();

            for (auto& o : corner_offset)
            {
                int new_x = x + o.first;
                int new_y = y + o.second;
                if (new_x >= 0 && new_x < N && new_y >= 0 && new_y < N
                    && !visits[new_x][new_y] && grid[new_x][new_y] == curr_color)
                {
                    next_q.push({new_x, new_y});
                    visits[new_x][new_y] = 1;
                }
            }
        }

        swap(q, next_q);
    }
    return curr_color;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<vector<char>> grid(N, vector<char>(N, 0));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> grid[i][j];

    // Counts color groups for the normal
    vector<vector<char>> visits(N, vector<char>(N, 0));
    int normal_colors[3] = {0, 0, 0}; // R, G, B
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (!visits[i][j])
            {
                char c = find_color_group(grid, visits, N, i, j);
                if (c == 'R') normal_colors[0]++;
                else if (c == 'G') normal_colors[1]++;
                else if (c == 'B') normal_colors[2]++;
            }
        }
    }

    // Set Gs as R
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            grid[i][j] = grid[i][j] == 'G' ? 'R' : grid[i][j];

    // Count color groups for the color-weak
    for (auto& row : visits)
        fill(row.begin(), row.end(), 0);
    int weak_colors[3] = {0, 0, 0}; // G-element will not be used
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (!visits[i][j])
            {
                char c = find_color_group(grid, visits, N, i, j);
                if (c == 'R') weak_colors[0]++;
                else if (c == 'G') weak_colors[1]++;
                else if (c == 'B') weak_colors[2]++;
            }
        }
    }

    int sum_normal = accumulate(begin(normal_colors), end(normal_colors), 0, plus<int>());
    int sum_weak = accumulate(begin(weak_colors), end(weak_colors), 0, plus<int>());
    cout << sum_normal << " " << sum_weak << endl;
}
