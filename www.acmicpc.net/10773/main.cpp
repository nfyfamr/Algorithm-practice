#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<int> stack;
    stack.reserve(k);
    for (int i = 0, t; i < k; ++i)
    {
        cin >> t;
        if (t == 0) stack.pop_back();
        else stack.push_back(t);
    }
    int sum = accumulate(stack.begin(), stack.end(), decltype(stack)::value_type(0));
    cout << sum;
}
