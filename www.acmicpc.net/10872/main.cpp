#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, rst = 1;
    cin >> n;
    for (int i = 1; i < n + 1; ++i) rst *= i;
    cout << rst;
}
