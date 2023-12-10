#include<iostream>
#include<list>
#include<queue>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, new_item;
    cin >> n;

    queue<int, list<int>> q;
    string command;
    for (int i = 0; i < n; ++i)
    {
        cin >> command;
        if (command == "push")
        {
              cin >> new_item;
              q.push(new_item);
        }
        else if (command == "pop")
        {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (command == "size")
        {
            cout << q.size() << '\n';
        }
        else if (command == "empty")
        {
            cout << (q.empty() ? 1 : 0) << '\n';
        }
        else if (command == "front")
        {
            cout << (q.empty() ? -1 : q.front()) << '\n';
        }
        else if (command == "back")
        {
            cout << (q.empty() ? -1 : q.back()) << '\n';
        }
    }
}
