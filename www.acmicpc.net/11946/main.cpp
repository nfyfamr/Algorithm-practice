#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
using namespace std;

struct Triplet
{
    int first, second, third; // (t_id, q_cnt, time)
};

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
        auto &info = teams[t_id-1][q_id-1];
        if (rst == "AC")
        {
            if (!info.first)
            {
                info.first = true;
                info.second += time;
            }
        }
        else
        {
            if (!info.first)
            {
                info.second += 20;
            }
        }
    }

    vector<Triplet> dashboard;
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
        dashboard.push_back({i + 1, cnt, time});
    }

    sort(dashboard.begin(), dashboard.end(), [](const auto &a, const auto &b) {
        if (a.second != b.second) return a.second > b.second;
        else if (a.third != b.third) return a.third < b.third;
        else return a.first < b.first;
    });

    for (auto &p : dashboard) cout << p.first << ' ' << p.second << ' ' << p.third << '\n';
}
