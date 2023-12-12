#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases[11] = { 1, 1, 2 };
    for (int i = 3; i < 11; ++i)
    {
        cases[i] = cases[i - 1] + cases[i - 2] + cases[i - 3];
    }

    int t;
    cin >> t;
    for (int i = 0, k; i < t; ++i)
    {
        cin >> k;
        cout << cases[k] << '\n';
    }
}
