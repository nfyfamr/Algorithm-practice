#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char** argv)
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, x;
    priority_queue<int> pq;

    cin >> N;

    while (N--)
    {
        cin >> x;

        x *= -1;

        if (x == 0)
        {

            if (pq.empty())
            {
                cout << 0 << endl;
            }
            else
            {
                cout << pq.top() * -1 << endl;
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
