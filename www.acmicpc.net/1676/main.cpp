#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt = 0, _f = 1;
    for (int i = 1; i < n + 1; ++i)
    {
        _f *= i;
        while (_f % 10 == 0)
        {
            _f = _f / 10;
            ++cnt;
        }
        _f = _f % 10;
    }
    cout << cnt;
}
