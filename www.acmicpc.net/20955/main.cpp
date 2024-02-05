#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<pair<int,int>> edge;
    for (int i=0, u, v; i < M; ++i)
    {
        cin >> u >> v;
        if (u < v)
            edge.push_back({u, v});
        else
            edge.push_back({v, u});
    }

    sort(edge.begin(), edge.end(), [](auto& l, auto& r) {
        return l.first < r.first;
    });

    vector<int> parent(N+1);
    int ops = -1;
    for (auto& e : edge)
    {
        if (parent[e.first] == 0 && parent[e.second] == 0)
        {
            ops++;  // connecting op.
        }
        else if (parent[e.first] != 0 && parent[e.second] != 0)
        {
            ops++;  // cutting op.
        }
        parent[e.first] = parent[e.second] = 1;
    }

    cout << ops;
}
