#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int T;
    
    cin >> T;
    while (T-- > 0)
    {
        int R;
        string S;
        ostringstream os;
        
        cin >> R >> S;
        for (int i = 0; i < S.size(); ++i)
        {
            for (int j = 0; j < R; ++j)
            {
                os << S[i];
            }
        }
        cout << os.str() << endl;
        
    }
    
    return 0;
}
