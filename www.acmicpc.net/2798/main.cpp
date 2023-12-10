#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> cards(n);
    for (int i = 0; i < n; ++i) cin >> cards[i];
    int max = 0, sum;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                sum = cards[i] + cards[j] + cards[k];
                if (sum > max && sum <= m) max = sum;
            }
        }
    }

    cout << max << endl;
}
