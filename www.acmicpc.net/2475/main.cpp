#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    uint32_t cert = 0;
    for (int i = 0, t; i < 5; ++i)
    {
        cin >> t;
        cert += t * t;
    }
    cout << cert % 10 << endl;
}
