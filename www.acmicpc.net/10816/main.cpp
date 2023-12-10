#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    int cards[20'000'001] = {0};
    for (int i = 0, c; i < n; ++i)
    {
        cin >> c;
        cards[c + 10'000'000] += 1;
    }

    cin >> m;
    for (int i = 0, t; i < m; ++i)
    {
        cin >> t;
        cout << cards[t + 10'000'000] << " ";
    }
}
