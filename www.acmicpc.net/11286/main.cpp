#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    auto comp = [](const auto &a, const auto &b)
    {
        return abs(a) > abs(b);
    };
    priority_queue<int, vector<int>, decltype(comp)> pq{comp};
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x == 0)
        {
            if (pq.empty()) cout << 0 << '\n';
            else
            {
                int t = pq.top(), cnt = 0;
                while (!pq.empty() && pq.top() == abs(t))
                {
                    ++cnt;
                    pq.pop();
                }
                if (pq.top() == -1 * abs(t))
                {
                    t = pq.top();
                    pq.pop();
                }
                else
                {
                    --cnt;
                }
                while (cnt-- > 0)
                {
                    pq.push(abs(t));
                }
                cout << t << '\n';
            }
        }
        else
        {
            pq.push(x);
        }
    }
}
