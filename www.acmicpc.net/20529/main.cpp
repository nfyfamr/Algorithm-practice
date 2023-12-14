#include<iostream>
#include<string>
#include<vector>
using namespace std;

int dist(string &a, string &b)
{
    int d = 0;
    for (int i = 0; i < 4; ++i) d += (a[i] == b[i] ? 0 : 1);
    return d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    // vector<string> mbti(100001);
    while (t-- > 0)
    {
        cin >> n;
        string str1, str2, str3;
        cin >> str1 >> str2;
        int dist_min = 12;
        int dist_12 = dist(str1, str2), dist_23, dist_13;
        for (int i = 3; i < n + 1; ++i)
        {
            cin >> str3;
            dist_23 = dist(str2, str3);
            dist_13 = dist(str1, str3);
            dist_min = min(dist_min, dist_12 + dist_23 + dist_13);

            str1 = str2, str2 = str3;
            dist_12 = dist_23;
        }

        cout << dist_min << '\n';
    }
}
