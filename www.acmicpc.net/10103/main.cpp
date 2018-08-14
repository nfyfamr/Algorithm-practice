#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    int C, S;
    
    C = S = 100;
    cin >> T;
    while (T-- > 0)
    {
        int c, s;
        cin >> c >> s;
        if (c > s)
        {
            S -= c;
        }
        if (s > c)
        {
            C -= s;
        }
    }
    cout << C << endl;
    cout << S << endl;
    
    return 0;
}
