#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int stairs[n];
    for (int i = 0; i < n; ++i) cin >> stairs[i];

    switch (n)
    {
        case 1:
            cout << stairs[0];
            return 0;
        case 2:
            cout << stairs[0] + stairs[1];
            return 0;
    }

    int dp[n];
    dp[0] = stairs[0];
    dp[1] = stairs[0] + stairs[1];
    dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);
    for (int i = 3, r1, r2; i < n; ++i)
    {
        dp[i] = stairs[i] + max(dp[i - 2], dp[i - 3] + stairs[i - 1]);
    }
    cout << dp[n - 1];
}
