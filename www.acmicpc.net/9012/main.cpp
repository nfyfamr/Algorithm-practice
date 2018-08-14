#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    
    cin >> T;
    while (T-- > 0)
    {
        int t = 0;
        string str;
        
        cin >> str;
        for (auto it = str.begin(); it != str.end(); ++it)
        {
            if (*it == '(')
                ++t;
            else
                --t;
        }
        
        cout << (t == 0 ? "YES" : "NO") << endl;
    }
    
    return 0;
}
