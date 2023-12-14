#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int dfs(vector<vector<char>> &house, int x, int y)
{
    vector<pair<int,int>> stack;
    stack.push_back({x, y});

    int cnt = 0;
    house[x][y] = 1;
    while (!stack.empty())
    {
        auto p = stack.back();
        stack.pop_back();
        x = p.first, y = p.second;
        ++cnt;

        if (x > 0 && house[x - 1][y] == -1)
        {
            stack.push_back({x - 1, y});
            house[x - 1][y] = 1;
        }
        if (y > 0 && house[x][y - 1] == -1)
        {
            stack.push_back({x, y - 1});
            house[x][y - 1] = 1;
        }
        if (x < house.size() - 1 && house[x + 1][y] == -1)
        {
            stack.push_back({x + 1, y});
            house[x + 1][y] = 1;
        }
        if (y < house[0].size() - 1 && house[x][y + 1] == -1)
        {
            stack.push_back({x, y + 1});
            house[x][y + 1] = 1;
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<char>> house(n, vector<char>(n, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> house[i][j];
            house[i][j] = -1 * (house[i][j] - '0');
        }
    }

    vector<int> house_nums;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (house[i][j] == -1) house_nums.push_back(dfs(house, i, j));

    sort(house_nums.begin(), house_nums.end());
    cout << house_nums.size() << '\n';
    for (auto &h : house_nums) cout << h << '\n';
}
