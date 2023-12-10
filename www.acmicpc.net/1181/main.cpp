#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    auto cmp = [](const string &a, const string &b) {
        if (a.length() != b.length()) return a.length() < b.length();
        else return a < b;
    };
    set<string, decltype(cmp)> dict(cmp);
    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;
        dict.insert(word);
    }

    for (auto &word : dict)
    {
        cout << word << '\n';
    }
}
