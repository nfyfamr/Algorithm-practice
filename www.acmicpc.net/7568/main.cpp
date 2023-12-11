#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Tuple
{
    int index, x, y, rank;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Tuple> students(n);
    for (int i = 0, x, y; i < n; ++i)
    {
        cin >> x >> y;
        students[i] = Tuple({i, x, y, 0});
    }

    auto compare = [](const auto &a, const auto &b) {
        if (a.x > b.x && a.y > b.y) return true;
        else return false;
    };
    sort(students.begin(), students.end(), compare);

    for (int i = 1; i < n; ++i)
    {
        if (compare(students[i-1], students[i]))
            students[i].rank = i;
        else
            students[i].rank = students[i-1].rank;
    }
    sort(students.begin(), students.end(), [](const auto &a, const auto &b) {
        return a.index < b.index;
    });

    for (auto &s : students) cout << s.rank + 1 << " ";
}
