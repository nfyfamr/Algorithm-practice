#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s[0] == '0') break;

        bool is_p = true;
        int s_len = s.length();
        for (int i = 0; i < s_len / 2 + 1; ++i)
        {
            if (s[i] != s[s_len - i - 1])
            {
                is_p = false;
                break;
            }
        }
        cout << (is_p ? "yes" : "no") << "\n";
    }
}
