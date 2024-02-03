#include<iostream>
#include<set>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    multiset<int> ms;
    cin >> N;
    while (N-- > 0)
    {
        int k, val;
        char c;
        ms.clear();

        cin >> k;
        while (k-- > 0)
        {
            cin >> c >> val;
            if (c == 'I')
                ms.insert(val);
            else if (!ms.empty())
            {
                if (val == 1)
                    ms.erase((++ms.rbegin()).base());
                else
                    ms.erase(ms.begin());
            }
        }
        if (ms.empty())
            cout << "EMPTY" << endl;
        else
            cout << *(ms.rbegin()) << " " << *(ms.begin()) << endl;
    }
}
