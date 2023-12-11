#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
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
        vector<int> q(n);
        vector<int> freq(11, 0);
        for (int i = 0, prio; i < n; ++i)
        {
            cin >> prio;
            q[i] = prio;
            freq[prio] += 1;
        }

        auto iter = freq.begin() + q[query] + 1;
        for (; iter != freq.end() && *iter == 0; ++iter);
        int prev_prio = (iter != freq.end() ? iter - freq.begin() : 0);

        auto prev_prio_it = find_if(q.rbegin(), q.rend(), [prev_prio](const auto &el) {
            return el == prev_prio; // if prev_prio == 0, iter is set as q.rend()
        });

        int order = accumulate(freq.begin() + q[query] + 1, freq.end(), decltype(freq)::value_type(0));
        if (prev_prio_it.base() - q.begin() > query)
        {
            order += count(prev_prio_it.base(), q.end(), q[query]);
        }
        else
        {
            order += count(prev_prio_it.base(), q.begin() + query, q[query]);
        }
        cout << order + 1 << '\n';
    }
}
