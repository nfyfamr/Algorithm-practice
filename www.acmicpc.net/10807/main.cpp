#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int vs[201] = {0}, tmp;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        vs[tmp + 100] += 1;
    }

    int v;
    cin >> v;
    cout << vs[v + 100];
}
