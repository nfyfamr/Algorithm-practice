#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    
    cin >> T;
    while (T-- > 0)
    {
        stack<bool> st;
        string str;
        cin >> str;
        for (auto it = str.begin(); it != str.end(); ++it)
        {
            if (*it == '(')
            {
                st.push(true);
            }
            else
            {
                if (st.empty())
                {
                    st.push(true);
                    break;
                }
                
                st.pop();
            }
        }
        
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
    
    return 0;
}
