#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_set<int> set;
    for (int i = 0, t; i < n; ++i)
    {
        cin >> t;
        set.insert(t);
    }

    int m;
    cin >> m;
    for (int i = 0, t; i < m; ++i)
    {
        cin >> t;
        cout << set.count(t) << '\n';
    }
}
