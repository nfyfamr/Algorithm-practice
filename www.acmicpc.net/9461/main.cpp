#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    unsigned long long P[101] = {0, 1, 1, 1, 2, 2};
    for (int i = 6; i < 101; ++i)
    {
        P[i] = P[i - 1] + P[i - 5];
    }

    int n;
    while (t-- > 0)
    {
        cin >> n;
        cout << P[n] << '\n';
    }
}
