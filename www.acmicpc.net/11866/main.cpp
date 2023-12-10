#include<iostream>
#include<list>
#include<queue>
#include<numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    list<int> _seq(n);
    iota(_seq.begin(), _seq.end(), 1);
    queue<int, list<int>> seq(_seq);

    cout << '<';
    while (seq.size() > 1)
    {
        int i = 1, tmp;
        while (i < k)
        {
            tmp = seq.front();
            seq.pop();
            seq.push(tmp);
            ++i;
        }

        cout << seq.front() << ", ";
        seq.pop();
    }
    cout << seq.front() << '>';
}
