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

    vector<string> mbti(33);
    string tmp;
    while (t-- > 0)
    {
        cin >> n;
        for (int i = 1; i < n + 1; ++i)
        {
            cin >> tmp;
            if (n < 33) mbti[i] = tmp;
        }
        if (n >= 33)
        {
            cout << 0 << '\n';
            continue;
        }

        int min_dist = 12;
        for (int i = 1; i < n - 1; ++i)
            for (int j = i + 1; j < n; ++j)
                for (int k = j + 1; k < n + 1; ++k)
                    min_dist = min(min_dist, dist(mbti[i], mbti[j]) + dist(mbti[j], mbti[k]) + dist(mbti[k], mbti[i]));
        cout << min_dist << '\n';
    }
}
