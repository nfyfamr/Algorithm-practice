#include<iostream>
using namespace std;

unsigned long long pow(unsigned int a, unsigned int b, unsigned int c)
{
    if (b == 0) return 1;

    auto rst = pow(a, b / 2, c);
    if (b % 2 == 0)
        return (rst * rst) % c;
    else
        return (((rst * rst) % c) * a) % c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int a, b, c;
    cin >> a >> b >> c;
    cout << pow(a, b, c);
}
