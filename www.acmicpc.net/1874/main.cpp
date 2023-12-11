#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> stack;
    vector<char> rst;
    stack.reserve(n);
    rst.reserve(n);

    int k = 1;
    for (int i = 0, t; i < n; ++i)
    {
        cin >> t;
        while (k < t)
        {
            rst.push_back('+');
            stack.push_back(k++);
        }
        if (k == t)
        {
            rst.push_back('+');
            rst.push_back('-');
            ++k;
        }
        else if (!stack.empty() && stack.back() == t)
        {
            rst.push_back('-');
            stack.pop_back();
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    for (auto &c : rst) cout << c << '\n';
}
