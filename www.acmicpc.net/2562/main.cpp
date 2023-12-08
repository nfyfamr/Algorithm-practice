#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int index = -1, max = 0;
    for (int i = 1, t; i < 10; ++i)
    {
        cin >> t;
        if (t > max)
        {
            index = i;
            max = t;
        }
    }
    cout << max << endl;
    cout << index << endl;
}
