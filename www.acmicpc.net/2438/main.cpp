#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    stringbuf buf;
    
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            buf.sputc('*');
        }
        buf.sputc('\n');
    }
    cout << buf.str();
    
    return 0;
}
