#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L, hash = 0;
    string s;
    cin >> L >> s;

    int r[5] = {1};
    for (int i = 1; i < 5; ++i) r[i] = 31 * r[i - 1];

    for (int i = 0; i < L; ++i)
    {
        hash += (s[i] - 'a' + 1) * r[i];
    }

    cout << hash % 1234567891 << endl;
}
