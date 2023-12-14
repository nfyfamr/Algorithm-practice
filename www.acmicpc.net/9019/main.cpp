#include<iostream>
#include<queue>
#include<bitset>
#include<string>
using namespace std;

void find_command(int a, int b)
{

    // bfs
    queue<pair<int,string>> q, next_q;
    bitset<10000> visited;
    q.push({a, ""});
    visited.set(a);
    int n, d, s, l, r;
    string c;
    while (!q.empty())
    {
        while (!q.empty())
        {
            auto p = q.front();
            n = p.first, c = p.second;
            q.pop();
            if (n == b)
            {
                cout << c << '\n';
                return;
            }

            d = (2 * n) % 10000;
            if (!visited.test(d))
            {
                visited.set(d);
                next_q.push({d, c + "D"});
            }
            s = (n == 0 ? 9999 : n - 1);
            if (!visited.test(s))
            {
                visited.set(s);
                next_q.push({s, c + "S"});
            }
            l = (n * 10) % 10000 + (n / 1000);
            if (!visited.test(l))
            {
                visited.set(l);
                next_q.push({l, c + "L"});
            }
            r = (n / 10) + (n % 10) * 1000;
            if (!visited.test(r))
            {
                visited.set(r);
                next_q.push({r, c + "R"});
            }
        }

        swap(q, next_q);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b;
    cin >> t;
    while (t-- > 0)
    {
        cin >> a >> b;
        find_command(a, b);
    }
}
