#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;

    bitset<21> s;
    string q;
    for (int i = 0, tmp; i < m; ++i)
    {
        cin >> q;
        if (q == "add")
        {
            cin >> tmp;
            s.set(tmp);
        }
        else if (q == "remove")
        {
            cin >> tmp;
            s.reset(tmp);
        }
        else if (q == "check")
        {
            cin >> tmp;
            cout << (s.test(tmp) ? 1 : 0) << '\n';
        }
        else if (q == "toggle")
        {
            cin >> tmp;
            s.flip(tmp);
        }
        else if (q == "all")
        {
            s.set();
        }
        else if (q == "empty")
        {
            s.reset();
        }
    }
}
