#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    while (true)
    {
        cin >> x >> y >> z;
        if (x + y + z == 0) break;

        if (x > y && x > z && x*x == y*y + z*z) cout << "right" << "\n";
        else if (y > x && y > z && y*y == x*x + z*z) cout << "right" << "\n";
        else if (z > x && z > y && z*z == x*x + y*y) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }
}
