#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string str;
    int len;
    
    cin >> str;
    len = str.length();
    for (int i = 0; i < len/10; ++i)
    {
        str.insert(10*(i+1)+i, 1, '\n');
    }
    cout << str << endl;
    
    return 0;
}
