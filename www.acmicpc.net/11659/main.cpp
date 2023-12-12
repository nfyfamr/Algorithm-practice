#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> sums(n + 1, 0);
    for (int i = 1; i < n + 1; ++i)
    {
        cin >> sums[i];
        sums[i] += sums[i - 1];
    }

    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v;
        cout << sums[v] - sums[u - 1] << '\n';
    }
}
