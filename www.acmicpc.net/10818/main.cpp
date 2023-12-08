#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, min=1'000'000, max=-1'000'000;
    cin >> N;
    for (int i = 0, t; i < N; ++i)
    {
        cin >> t;
        if (t > max)
        {
            max = t;
        }
        if (t < min)
        {
            min = t;
        }
    }

    cout << min << " " << max << endl;
}
