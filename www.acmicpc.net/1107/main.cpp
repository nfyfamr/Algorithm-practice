#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int num_digits(int n)
{
    int d = 1;
    while (n/10 != 0)
    {
        n /= 10;
        ++d;
    }
    return d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int target;
    int broken_n;
    vector<int> btns, broken_btns;

    cin >> target >> broken_n;
    broken_btns.resize(broken_n);
    for (int i = 0; i < broken_n; ++i)
        cin >> broken_btns[i];

    // find unbroken btns
    sort(broken_btns.begin(), broken_btns.end());
    for (int i = 9; i >= 0; --i)
        if (!broken_btns.empty() && broken_btns.back() == i)
            broken_btns.pop_back();
        else
        	btns.push_back(i);

    auto dist_to_target = [target](int n) { return abs(n - target); };
    // 1
    int dist_to_100 = dist_to_target(100);

    // 2
    int min_dist_with_btns = 500000;
    queue<int, deque<int>> q(deque<int>(btns.begin(), btns.end()));
    while (!q.empty())
    {
        int n = q.front(); q.pop();
        min_dist_with_btns = min(min_dist_with_btns, num_digits(n) + dist_to_target(n));
        if (n != 0 && n < 100000)
            for (auto& item : btns)
                q.push(n*10 + item);
    }

    cout << min(dist_to_100, min_dist_with_btns) << endl;
}
