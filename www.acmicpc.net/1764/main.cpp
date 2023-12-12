#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> no_hear, no_seen;
    no_hear.reserve(n);
    no_seen.reserve(m);
    string name;
    for (int i = 0; i < n; ++i)
    {
        cin >> name;
        no_hear.push_back(name);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> name;
        no_seen.push_back(name);
    }

    sort(no_hear.begin(), no_hear.end());
    sort(no_seen.begin(), no_seen.end());
    auto h_it = no_hear.begin();
    auto s_it = no_seen.begin();
    while (h_it != no_hear.end() || s_it != no_seen.end())
    {
        if (*h_it == *s_it)
        {
            cout << *h_it << '\n';
            ++h_it;
            ++s_it;
        }
        else if (*h_it < *s_it) ++h_it;
        else ++s_it;
    }
}
