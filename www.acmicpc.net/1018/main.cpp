#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    int dp_w[N][M] = {0}, dp_b[N][M] = {0};
    char c;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> c;

            int w_max, b_max;
            w_max = (i == 0 ? 0 : dp_w[i-1][j]) + (j == 0 ? 0 : dp_w[i][j-1]) - (i == 0 || j == 0 ? 0 : dp_w[i-1][j-1]);
            b_max = (i == 0 ? 0 : dp_b[i-1][j]) + (j == 0 ? 0 : dp_b[i][j-1]) - (i == 0 || j == 0 ? 0 : dp_b[i-1][j-1]);

            if ((i + j) % 2 == 0)
            {
                dp_w[i][j] = (c == 'W') ? w_max : w_max + 1;
                dp_b[i][j] = (c == 'B') ? b_max : b_max + 1;
            }
            else
            {
                dp_w[i][j] = (c == 'B') ? w_max : w_max + 1;
                dp_b[i][j] = (c == 'W') ? b_max : b_max + 1;
            }
        }
    }

    int min_edit = 50*50;
    for (int i = 7; i < N; ++i)
    {
        for (int j = 7; j < M; ++j)
        {
            int w_min = 0, b_min = 0;
            w_min = dp_w[i][j] - (i == 7 ? 0 : dp_w[i-8][j]) - (j == 7 ? 0 : dp_w[i][j-8]) + (i == 7 || j == 7 ? 0 : dp_w[i-8][j-8]);
            b_min = dp_b[i][j] - (i == 7 ? 0 : dp_b[i-8][j]) - (j == 7 ? 0 : dp_b[i][j-8]) + (i == 7 || j == 7 ? 0 : dp_b[i-8][j-8]);
            min_edit = min({w_min, b_min, min_edit});
        }
    }

    cout << min_edit << endl;
}
