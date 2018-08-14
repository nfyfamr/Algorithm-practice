#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string a, b;
    string result;
    int len;
    
    cin >> a >> b;
    if (a.length() > b.length())
        result = a;
    else if (b.length() > a.length())
        result = b;
    else
    {
        for (int i = a.length() - 1; i >= 0; --i)
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else
            {
                result = a[i] > b[i] ? a : b;
                break;
            }
        }
    }
    for (auto it = result.rbegin(); it != result.rend(); ++it)
    {
        cout << *it;
    }
    cout << endl;
    
    return 0;
}
