#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int dp[n + 1] = { 0 };
    dp[0] = dp[1] = 1;
    for (int i = 2; i < n + 1; ++i)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10'007;
    }
    cout << dp[n];
}
