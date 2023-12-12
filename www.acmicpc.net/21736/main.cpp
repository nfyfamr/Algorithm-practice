#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    char campus[n][m];
    pair<int, int> I;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> campus[i][j];
            if (campus[i][j] == 'I') I = make_pair(i, j);
        }
    }

    vector<pair<int, int>> stack;
    stack.reserve(n * m);
    stack.push_back(I);
    int cnt = 0;
    while (!stack.empty())
    {
        auto p = stack.back();
        stack.pop_back();

        if (campus[p.first][p.second] == 'P')
            ++cnt;
        campus[p.first][p.second] = 'X';

        if (p.first > 0 && campus[p.first - 1][p.second] != 'X')
            stack.push_back({p.first - 1, p.second});
        if (p.second > 0 && campus[p.first][p.second - 1] != 'X')
            stack.push_back({p.first, p.second - 1});
        if (p.first < n - 1 && campus[p.first + 1][p.second] != 'X')
            stack.push_back({p.first + 1, p.second});
        if (p.second < m - 1 && campus[p.first][p.second + 1] != 'X')
            stack.push_back({p.first, p.second + 1});
    }

    if (cnt == 0)
        cout << "TT";
    else
        cout << cnt;
}
