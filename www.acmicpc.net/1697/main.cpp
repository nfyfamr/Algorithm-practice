#include<iostream>
#include<vector>
#include<queue>
#include<bitset>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    if (k <= n)
    {
        cout << n - k;
        return 0;
    }

    // bfs with memoization
    queue<int> q, next_q;
    bitset<100001> visit;
    q.push(n);
    int time = 0;
    while (!q.empty())
    {
        while (!q.empty())
        {
            auto p = q.front();
            q.pop();

            if (p == k)
            {
                cout << time;
                queue<int> new_q;
                swap(q, new_q);
                break;
            }
            if (p > 0 && !visit.test(p - 1))
            {
                visit.set(p - 1);
                next_q.push(p - 1);
            }
            if (p < 100000 && !visit.test(p + 1))
            {
                visit.set(p + 1);
                next_q.push(p + 1);
            }
            if (2 * p <= 100000 && !visit.test(2 * p))
            {
                visit.set(2 * p);
                next_q.push(2 * p);
            }
        }

        ++time;
        swap(q, next_q);
    }
}
