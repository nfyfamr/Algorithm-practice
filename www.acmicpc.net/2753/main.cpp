#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;
    if (y % 400 == 0)
    {
        cout << 1 << endl;
    }
    else if (y % 4 == 0 && y % 100 != 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
