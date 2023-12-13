#include<iostream>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    queue<long long> q, q_next;
    q.push(a);
    int cnt = 0;
    bool find = false;
    while (!q.empty() && !find)
    {
        ++cnt;
        while (!q.empty())
        {
            a = q.front();
            q.pop();
            if (a == b) {
                find = true;
                break;
            }
            else
            {
                if (a * 2 <= b) q_next.push(a * 2);
                if (a * 10 + 1 <= b) q_next.push(a*10 + 1);
            }
        }
        swap(q, q_next);
    }

    cout << (find ? cnt : -1);
}
