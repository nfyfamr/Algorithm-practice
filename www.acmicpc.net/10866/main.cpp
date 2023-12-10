#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, new_item;
    cin >> n;

    deque<int> dq;
    string command;
    for (int i = 0; i < n; ++i)
    {
        cin >> command;
        if (command == "push_front")
        {
              cin >> new_item;
              dq.push_front(new_item);
        }
        else if (command == "push_back")
        {
              cin >> new_item;
              dq.push_back(new_item);
        }
        else if (command == "pop_front")
        {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (command == "pop_back")
        {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (command == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (command == "empty")
        {
            cout << (dq.empty() ? 1 : 0) << '\n';
        }
        else if (command == "front")
        {
            cout << (dq.empty() ? -1 : dq.front()) << '\n';
        }
        else if (command == "back")
        {
            cout << (dq.empty() ? -1 : dq.back()) << '\n';
        }
    }
}
