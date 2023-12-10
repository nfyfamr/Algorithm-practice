#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int mat[n*m], tmp;
    for (int i = 0; i < n*m; ++i) cin >> mat[i];
    for (int i = 0; i < n*m; ++i)
    {
        cin >> tmp;
        mat[i] += tmp;
    }

    for (int i = 0; i < n*m; ++i)
    {
        cout << mat[i] << ' ';
        if ((i + 1) % m == 0) cout << '\n';
    }
}
