#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    vector<vector<int>> part_sum(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
    {
        part_sum[i][i] = nums[i];
        for (int j = i + 1; j < n; ++j)
        {
            part_sum[i][j] = part_sum[i][j - 1] + nums[j];
        }
    }

    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v;
        cout << part_sum[u - 1][v - 1] << '\n';
    }
}
