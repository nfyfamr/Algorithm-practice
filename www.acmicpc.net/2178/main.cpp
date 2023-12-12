#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    char labyrinth[n][m] = {0};
    char c;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> c;
            labyrinth[i][j] = c - '0';
        }
    }

    // bfs
    vector<pair<int,int>> stack, next_stack;
    stack.reserve(n * m);
    next_stack.reserve(n * m);
    stack.push_back({0, 0});

    vector<vector<int>> dp(n, vector<int>(m, 10000));
    dp[0][0] = 1;
    while (!stack.empty())
    {
        while(!stack.empty())
        {
            auto p = stack.back();
            stack.pop_back();
            labyrinth[p.first][p.second] = 0;
            if (p.first > 0 && labyrinth[p.first - 1][p.second] == 1)
            {
                next_stack.push_back({p.first - 1, p.second});
                dp[p.first - 1][p.second] = min(dp[p.first - 1][p.second], dp[p.first][p.second] + 1);
            }
            if (p.second > 0 && labyrinth[p.first][p.second - 1] == 1)
            {
                next_stack.push_back({p.first, p.second - 1});
                dp[p.first][p.second - 1] = min(dp[p.first][p.second - 1], dp[p.first][p.second] + 1);
            }
            if (p.first < n - 1 && labyrinth[p.first + 1][p.second] == 1)
            {
                next_stack.push_back({p.first + 1, p.second});
                dp[p.first + 1][p.second] = min(dp[p.first + 1][p.second], dp[p.first][p.second] + 1);
            }
            if (p.second < m - 1 && labyrinth[p.first][p.second + 1] == 1)
            {
                next_stack.push_back({p.first, p.second + 1});
                dp[p.first][p.second + 1] = min(dp[p.first][p.second + 1], dp[p.first][p.second] + 1);
            }
        }

        swap(stack, next_stack);
    }

    cout << dp[n - 1][m - 1];
}
