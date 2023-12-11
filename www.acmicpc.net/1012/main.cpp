#include<iostream>
#include<vector>
using namespace std;

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

        int warm = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == 0 && j == 0) warm += (farm[0][0] ? 1 : 0);
                else if (i == 0) warm += (farm[i][j] && !farm[i][j-1] ? 1 : 0);
                else if (j == 0) warm += (farm[i][j] && !farm[i-1][j] ? 1 : 0);
                else warm += (farm[i][j] && !farm[i][j-1] && !farm[i-1][j] ? 1 : 0);
            }
        }
        cout << warm << '\n';
    }
}
