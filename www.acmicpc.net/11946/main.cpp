#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<pair<bool, int>>> teams(n, vector<pair<bool, int>>(m, make_pair(false, 0))); // (pass, panalty or time)

    int time, t_id, q_id;
    string rst;
    for (int i = 0; i < q; ++i)
    {
        cin >> time >> t_id >> q_id >> rst;
        if (rst == "AC")
        {
            auto info = teams[t_id-1][q_id-1];
            if (!info.first)
            {
                teams[t_id-1][q_id-1].first = true;
                teams[t_id-1][q_id-1].second += time;
            }
        }
        else
        {
            auto info = teams[t_id-1][q_id-1];
            if (!info.first)
            {
                teams[t_id-1][q_id-1].second += 20;
            }
        }
    }

    vector<pair<int, int>> dashboard(n);
    for (int i = 0; i < n; ++i)
    {
        int cnt = 0, time = 0;
        for (auto &p : teams[i])
        {
            if (p.first)
            {
                ++cnt;
                time += p.second;
            }
        }
        dashboard[i] = make_pair(cnt, time);
    }

    stable_sort(dashboard.begin(), dashboard.end(), [](const auto &a, const auto &b) {
        if (a.first != b.first) return a.first > b.first;
        else return a.second < b.second;
    });

    for (int i = 0; i < n; ++i) cout << i + 1 << ' ' << dashboard[i].first << ' ' << dashboard[i].second << '\n';
}
