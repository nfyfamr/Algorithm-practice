#include<iostream>
#include<numeric>
#include<list>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    list<int> _cards(n);
    iota(_cards.begin(), _cards.end(), 1);
    queue<int, list<int>> cards(_cards);

    while (cards.size() > 1)
    {
        cards.pop();
        int c = cards.front();
        cards.pop();
        cards.push(c);
    }
    cout << cards.front();
}
