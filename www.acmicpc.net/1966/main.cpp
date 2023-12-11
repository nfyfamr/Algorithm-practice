#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, query;
    cin >> t;
    while (t-- > 0)
    {
        cin >> n >> query;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int queried_prio;
        for (int i = 0, prio; i < n; ++i)
        {
            cin >> prio;
            q.push({i, prio});
            pq.push(prio);
            if (query == i) queried_prio = prio;
        }

        int cnt = 0;
        while (true)
        {
            if (q.front().second == pq.top())
            {
                ++cnt;
                if (q.front().first == query) break;
                q.pop();
                pq.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
        cout << cnt << '\n';
    }
}
