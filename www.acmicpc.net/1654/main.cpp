#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cutting(int x, vector<int> cables)
{
    int cutted = 0;
    for (auto &c : cables) cutted += c / x;
    return cutted;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;
    vector<int> cables(n);
    for (int i = 0; i < k; ++i) cin >> cables[i];

    unsigned int low = 1, mid, high = *max_element(cables.begin(), cables.end());
    int cutted;
    while (low <= high)
    {
        mid = (low + high) / 2;
        cutted = cutting(mid, cables);
        if (cutted >= n) low = mid + 1;
        else high = mid - 1;
    }
    cout << low - 1;
}
