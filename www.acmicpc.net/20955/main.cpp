#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int _find(int n, vector<int>& parent)
{
	// cout << n << parent[n] << " " << endl;
    return n == parent[n] ? n : _find(parent[n], parent);
}

void _union(int fu, int fv, vector<int>& parent)
{
    parent[fv] = fu;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int ops = 0;
    vector<int> parent(N+1);
    iota(parent.begin() + 1, parent.end(), 1);

    for (int i=0, u, v; i < M; ++i)
    {
        cin >> u >> v;
        int fu = _find(u, parent);
        int fv = _find(v, parent);
        if (fu == fv)
        {
            ops++;
            parent[u] = parent[v] = fu;
            continue;
        }

        _union(fu, fv, parent);
    }

    for (int i=1; i<N+1; ++i)
        if (parent[i] == i)
            ops++;

    cout << ops - 1;
}
