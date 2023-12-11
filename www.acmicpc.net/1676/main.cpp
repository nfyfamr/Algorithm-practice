#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt;
    cin >> n;
    cnt = (n / 5) + (n / 25) + (n / 125);
    cout << cnt;
}
