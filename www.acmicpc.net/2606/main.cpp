#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    bool edges[n + 1][n + 1] = { 0 };
    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v;
        edges[u][v] = edges[v][u] = true;
    }

    vector<int> computers(n + 1, 0);
    vector<int> stack;
    stack.reserve(n);
    stack.push_back(1);
    while (!stack.empty())
    {
        int contaminated = stack.back();
        stack.pop_back();
        for (int i = 1; i < n + 1; ++i)
        {
            if (edges[contaminated][i])
            {
                stack.push_back(i);
                edges[contaminated][i] = edges[i][contaminated] = false;
                computers[i] = 1;
            }
        }
    }
    cout << accumulate(computers.begin(), computers.end(), decltype(computers)::value_type(0));
}
