#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, bucket[10001] = {0};
    cin >> N;

    for (int i = 0, t; i < N; ++i)
    {
        cin >> t;
        bucket[t] += 1;
    }

    for (int i = 1; i < 10001; ++i)
    {
        if (bucket[i] == 0) continue;
        for (int j = 0; j < bucket[i]; ++j)
        {
            cout << i << '\n';
        }
    }
}
