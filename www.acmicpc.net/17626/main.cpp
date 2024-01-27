#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    const int MAX = 223;
    vector<int> sq(MAX, 0);
    for (int i = 1; i <= MAX; ++i)
        sq[i] = i*i;

    for (int l = 0; l <= MAX; ++l)
        for (int k = 0; k <= MAX; ++k)
            for (int j = 0; j <= MAX; ++j)
                for (int i = 0; i <= MAX; ++i)
                {
                    int sum = sq[i] + sq[j] + sq[k] + sq[l];
                    if (sum > n) break;
                    else if (sum == n)
                    {
                        cout << (!!i + !!j + !!k + !!l) << endl;
                        return 0;
                    }
                }
}
