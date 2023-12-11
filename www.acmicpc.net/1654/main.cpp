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

    int low = 1, high = *max_element(cables.begin(), cables.end());
    do
    {
        int mid = (low + high) / 2;
        int cutted = cutting(mid, cables);
        if (cutted >= n) low = mid;
        else if (cutted < n) high = mid;
    } while (low < high);
    cout << high;
}
