#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> dp(n, 0), dp_prev(n, 0);
    cin >> dp_prev[0];
    for (int i = 1, t; i < n; ++i)
    {
        cin >> t;
        dp[0] = dp_prev[0] + t;
        for (int j = 1; j < i; ++j)
        {
            cin >> t;
            dp[j] = max(dp_prev[j], dp_prev[j - 1]) + t;
        }
        cin >> t;
        dp[i] = dp_prev[i - 1] + t;

        swap(dp, dp_prev);
    }

    auto max_it = max_element(dp_prev.begin(), dp_prev.end());
    cout << *max_it;
}
