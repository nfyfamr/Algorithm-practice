#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> meetings;
    meetings.reserve(n);
    for (int i = 0, t1, t2; i < n; ++i)
    {
        cin >> t1 >> t2;
        meetings.push_back({t1, t2});
    }

    sort(meetings.begin(), meetings.end(), [](const auto &a, const auto &b) {
        return a.second < b.second;
    });

    pair<int, int> last_meeting{0, 0};
    int cnt = 0;
    for (auto &m : meetings)
    {
        if (last_meeting.second <= m.first)
        {
            ++cnt;
            last_meeting = m;
        }
    }
    cout << cnt;
}
