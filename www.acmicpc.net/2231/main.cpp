#include<iostream>
using namespace std;

int num_gen(int x)
{
    int rst = x;
    while (x / 10 > 0)
    {
        rst += x % 10;
        x = x / 10;
    }
    return rst + x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, power = 1;
    cin >> n;
    int t = n;
    while (t / 10 > 0){
        ++power;
        t = t % 10;
    }

	int i = n > 19 ? n - 10*power : 1;
    for (; i < n; ++i)
    {
        if (num_gen(i) == n)
        {
            cout << i;
            break;
        }
    }
    if (i == n) cout << 0;
}
