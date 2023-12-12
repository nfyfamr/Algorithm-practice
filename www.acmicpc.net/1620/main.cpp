#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> name_dict;
    vector<string> num_dict;
    num_dict.reserve(n + 1);

    string poketmon;
    for (int i = 0; i < n; ++i)
    {
        cin >> poketmon;
        name_dict[poketmon] = i + 1;
        num_dict[i + 1] = poketmon;
    }

    string query;
    for (int i = 0; i < m; ++i)
    {
        cin >> query;
        if (query[0] >= '1' && query[0] <= '9') cout << num_dict[stoi(query)] << '\n';
        else cout << name_dict[query] << '\n';
    }
}
