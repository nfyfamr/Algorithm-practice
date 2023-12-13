#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long a, b, c;
    cin >> a >> b >> c;
    unsigned long long rst = a;
    for (int i = 0; i < b; ++i)
    {
        rst = rst * a % c;
    }
    cout << a;
}
