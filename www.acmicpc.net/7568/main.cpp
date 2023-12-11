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
    vector<pair<int, int>> students;
    students.reserve(n);
    for (int i = 0, x, y; i < n; ++i)
    {
        cin >> x >> y;
        students.push_back({x, y});
    }

    for (auto &s : students)
    {
        int rank = count_if(students.begin(), students.end(), [&s](const auto &el) {
            return s.first < el.first && s.second < el.second;
        });
        cout << rank + 1 << " ";
    }
}
