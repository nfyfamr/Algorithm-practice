#include<iostream>
#include<numeric>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }

    vector<int> rates(n);
    for (int i = 0, t; i < n; ++i) cin >> rates[i];
    sort(rates.begin(), rates.end());
    
    int except = round(n * 0.15);
    float sum = accumulate(rates.begin()+except, rates.end()-except, decltype(rates)::value_type(0));
    float avg = round(sum / (n - 2 * except));
    cout << avg;
}
