#include<iostream>
using namespace std;

class Checker
{
public:
    char next_state = 'I';
    bool valid_next(char n) {
        bool ret = this->next_state == n;
        this->next_state = (n == 'I' ? 'O' : 'I');
        return ret;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int anchor = 0, cnt = 0;
    char c;
    Checker checker;
    for (int i = 0; i < m; ++i)
    {
        cin >> c;
        if (checker.valid_next(c))
        {
            if (i - anchor == 2 * n)
            {
                ++cnt;
                anchor += 2;
            }
        }
        else
        {
            anchor = i;
        }
    }

    cout << cnt;
}
