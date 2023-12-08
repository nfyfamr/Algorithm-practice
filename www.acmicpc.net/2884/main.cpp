#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, M;
    cin >> H >> M;
    if (M >= 45)
    {
        M -= 45;
    }
    else
    {
        H -= 1;
        M = M + 15;
        if (H < 0)
        {
            H = 23;
        }
    }
    cout << H << " " << M << endl;
}
