#include <iostream>

using namespace std;

int count_fill_cases(int );

int main(int argc, char** argv)
{
    int n, result;

    cin >> n;
    result = count_fill_cases(n);
    cout << result;

    return 0;
}

int count_fill_cases(int n) {
    int dp[1001];

    dp[1] = 1;
    dp[2] = 2;
    for (int i=3; i<=n; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
        dp[i] %= 10007;
    }

    return dp[n];
}
