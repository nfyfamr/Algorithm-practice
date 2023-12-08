#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    string s;
    cin >> L >> s;

    uint64_t r[L] = {1}, M = 1'234'567'891;
    for (int i = 1; i < L; ++i) r[i] = (31 * r[i - 1]) % M;

    uint64_t hash = 0;
    for (int i = 0; i < L; ++i)
    {
        hash += (s[i] - 'a' + 1) * r[i];
    }

    cout << hash % M << endl;
}
