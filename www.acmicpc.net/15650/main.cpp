#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

void print_comb_order_of(vector<int>::iterator begin, vector<int>::iterator end, int order, string str)
{
    if (order == 0)
    {
        cout << str << '\n';
        return ;
    }
    for (; begin != end - order + 1; ++begin)
        print_comb_order_of(begin + 1, end, order - 1, str + to_string(*begin) + ' ');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> naturals(n);
    iota(naturals.begin(), naturals.end(), 1);

    print_comb_order_of(naturals.begin(), naturals.end(), m, "");
}
