#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, x, y, tmp;
    cin >> a >> b;

    if (a > b)
    {
        x = a;
        y = b;
    }
    else
    {
        x = b;
        y = a;
    }
    while (x % y != 0)
    {
        tmp = x;
        x = y;
        y = tmp % y;
    }
    int gcd = y;
    int lcs = (a / gcd) * (b / gcd) * gcd;

    cout << gcd << '\n' << lcs;
}
