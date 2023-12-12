#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> password;
    string site, pwd;
    for (int i = 0; i < n; ++i)
    {
        cin >> site >> pwd;
        password[site] = pwd;
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> site;
        cout << password[site] << '\n';
    }
}
