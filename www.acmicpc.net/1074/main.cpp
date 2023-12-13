#include<iostream>
#include<cmath>
using namespace std;

int z_visit(int n, int x, int y)
{
    if (n == 0) return 0;

    int res = 0;
    int half = pow(2, n-1);
    int i = x, j = y;
    if (y >= half && x < half)
    {
        res += half * half;
        i = x;
        j = y - half;
    }
    else if (y < half && x >= half)
    {
        res += 2 * half * half;
        i = x - half;
        j = y;
    }
    else if (y >= half && x >= half)
    {
        res += 3 * half * half;
        i = x - half;
        j = y - half;
    }

    return res + z_visit(n - 1, i, j);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, c;
    cin >> n >> r >> c;

    cout << z_visit(n, r, c);
}
