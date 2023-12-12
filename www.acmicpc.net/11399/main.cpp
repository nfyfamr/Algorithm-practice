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

    vector<int> times(n);
    for (int i = 0; i < n; ++i) cin >> times[i];

    sort(times.begin(), times.end());
    int sum = 0;
    for (int i = 0; i < n; ++i) sum += times[i] * (n - i);

    cout << sum;
}
