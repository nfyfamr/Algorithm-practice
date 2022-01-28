#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int T, len;
    string p, arr_str;
    list<int> l;

    cin >> T;
    while(T--)
    {

        l.clear();

        char par;
        cin >> p >> len >> par;

        for (int i = 0; i < len; ++i)
        {
            int n;
            char c;
            cin >> n >> c;
            l.push_back(n);
        }
        string tmp;
        getline(cin, tmp);

        bool is_fw_dir = true, is_error = false;
        for (auto _p : p)
        {
            if (_p == 'R')
            {
                is_fw_dir = !is_fw_dir;
            }
            else {  // _p is 'D'
                if (l.empty())
                {
                    is_error = true;
                    break;
                }

                if (is_fw_dir)
                {
                    l.pop_front();
                }
                else {
                    l.pop_back();
                }
            }

        }

        if (is_error)
        {
            cout << "error\n";
            continue;
        }

        cout << '[';
        if (l.size() != 0)
        {
            if (is_fw_dir)
            {
                for_each(l.begin(), prev(l.end()), [&](int &x){ cout << x << ','; });
                cout << *prev(l.end());
            }
            else
            {
                for_each(l.rbegin(), prev(l.rend()), [&](int &x){ cout << x << ','; });
                cout << *prev(l.rend());
            }
        }
        cout << "]\n";

    }

    return 0;
}
