#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> stack;
    stack.reserve(100);
    while (true)
    {
        string str;
        getline(cin, str);
        int str_len = str.length();
        if (str_len == 1 && str[0] == '.') break;

        stack.clear();
        bool bal = true;
        for (int i = 0; i < str_len; ++i)
        {
            if (str[i] == '(')
            {
                stack.push_back('(');
            }
            else if (str[i] == ')')
            {
                if (stack.back() == '(') stack.pop_back();
                else
                {
                    bal = false;
                    break;
                }
            }
            else if (str[i] == '[')
            {
                stack.push_back('[');
            }
            else if (str[i] == ']')
            {
                if (stack.back() == '[') stack.pop_back();
                else
                {
                    bal = false;
                    break;
                }
            }
        }
        cout << (bal ? "yes" : "no") << '\n';
    }
}
