#include<iostream>
#include<vector>
using namespace std;

pair<int, int> split(vector<vector<char>> &paper, int x, int y, int n)
{
    if (n == 1)
        return paper[x][y] == 0 ? make_pair(1, 0) : make_pair(0, 1);

    int n2 = n / 2;
    auto q1 = split(paper, x, y, n2);
    auto q2 = split(paper, x + n2, y, n2);
    auto q3 = split(paper, x, y + n2, n2);
    auto q4 = split(paper, x + n2, y + n2, n2);

    int sum_w = q1.first + q2.first + q3.first + q4.first;
    int sum_b = q1.second + q2.second + q3.second + q4.second;
    if (sum_w == 0) return make_pair(0, 1);
    else if (sum_b == 0) return make_pair(1, 0);
    else return make_pair(sum_w, sum_b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<char>> paper(n, vector<char>(n));
    for (int i = 0, c; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> c;
            paper[i][j] = char(c);
        }
    }

    auto rst = split(paper, 0, 0, n);
    cout << rst.first << '\n' << rst.second;
}
