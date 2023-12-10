#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, ball = 1;
    cin >> m;

    int a, b;
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        if (ball == a) ball = b;
        else if (ball == b) ball = a;
    }
    cout << ball;
}
