#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    int count;
    
    cin >> N;
    if (N < 100)
    {
        cout << N << endl;
        return 0;
    }
    
    count = 99;
    if (N == 1000) --N;
    for (int i = 1; i <= N/100; ++i)
    {
        for (int j = -4; j < 5; ++j)
        {
            int p = i + 2 * j;
            if ( p < 0 || p > 9 )
            {
                continue;
            }
            int t = i * 100 + (i + j) * 10 + p;
            if (t <= N)
            {
                ++count;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}
