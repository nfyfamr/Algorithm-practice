#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char** argv)
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    priority_queue<int> pq;

    cin >> N;

    while (N--)
    {
        int x;

        cin >> x;

        if (x == 0)
        {

            if (pq.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }

        }
        else
        {
            pq.push(x);
        }
    }

    return 0;
}
