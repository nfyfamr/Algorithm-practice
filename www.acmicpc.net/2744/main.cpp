#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    for (char &c : s) cout << (c < 'a' ? char (c + 32) : char (c - 32));
}
