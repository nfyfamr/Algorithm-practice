#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool hw[31] = {false};
    for (int i = 0, t; i < 28; ++i)
    {
        cin >> t;
        hw[t] = true;
    }

    for (int i = 1; i < 31; ++i)
    {
        if (!hw[i]) cout << i << '\n';
    }
}
