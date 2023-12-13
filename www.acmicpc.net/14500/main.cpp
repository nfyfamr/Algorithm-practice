#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int test(vector<vector<int>> &grid, int x, int y)
{
    vector<int> sums(13, 0);
    int n = grid.size(), m = grid[0].size();

    if (x + 3 < n) sums[0] = grid[x][y] + grid[x+1][y] + grid[x+2][y] + grid[x+3][y];
    if (y + 3 < m) sums[1] = grid[x][y] + grid[x][y+1] + grid[x][y+2] + grid[x][y+3];
    if (x + 1 < n && y + 1 < m) sums[2] = grid[x][y] + grid[x+1][y] + grid[x][y+1] + grid[x+1][y+1];
    if (x + 2 < n && y + 1 < m) sums[3] = grid[x][y] + grid[x+1][y] + grid[x+2][y] + grid[x+2][y+1];
    if (x + 1 < n && y + 2 < m) sums[4] = grid[x][y] + grid[x+1][y] + grid[x][y+1] + grid[x][y+2];
    if (x + 2 < n && y + 1 < m) sums[5] = grid[x][y] + grid[x][y+1] + grid[x+1][y+1] + grid[x+2][y+1];
    if (x + 1 < n && y + 2 < m) sums[6] = grid[x+1][y] + grid[x+1][y+1] + grid[x+1][y+2] + grid[x][y+2];
      if (x + 2 < n && y + 1 < m) sums[7] = grid[x][y] + grid[x+1][y] + grid[x+1][y+1] + grid[x+2][y+1];
    if (x + 1 < n && y + 2 < m) sums[8] = grid[x+1][y] + grid[x+1][y+1] + grid[x][y+1] + grid[x][y+2];
    if (x + 1 < n && y + 2 < m) sums[9] = grid[x][y] + grid[x][y+1] + grid[x][y+2] + grid[x+1][y+1];
      if (x + 2 < n && y + 1 < m) sums[10] = grid[x+1][y] + grid[x][y+1] + grid[x+1][y+1] + grid[x+2][y+1];
    if (x + 1 < n && y + 2 < m) sums[11] = grid[x+1][y] + grid[x+1][y+1] + grid[x+1][y+2] + grid[x][y+1];
    if (x + 2 < n && y + 1 < m) sums[12] = grid[x][y] + grid[x+1][y] + grid[x+1][y+1] + grid[x+2][y];

    return *max_element(sums.begin(), sums.end());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> grid[i][j];

    int max_sum = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            max_sum = max(max_sum, test(grid, i, j));
        }
    cout << max_sum;
}
