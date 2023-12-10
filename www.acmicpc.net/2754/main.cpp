#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char g;
    float s;
    cin >> g;
    if (g == 'F')
    {
        cout << "0.0";
        return 0;
    }
    s = 4.0 - (g - 'A');
    cin >> g;
    s += g == '+' ? 0.3 : (g == '-' ? -0.3 : 0);

    cout << fixed;
    cout << setprecision(1);
    cout << s;
}
