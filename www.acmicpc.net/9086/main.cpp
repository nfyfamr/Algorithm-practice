#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    
    cin >> T;
    while (T-- > 0)
    {
        string str;
        cin >> str;
        cout << *(str.begin()) << *(str.end()-1) << endl;
    }
    
    return 0;
}
