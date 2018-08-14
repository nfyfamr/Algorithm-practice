#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    stringbuf buf;
    
    cin >> n;
    
    for (int i = n; i > 0; --i)
    {
        for (int j = n; j > 0; --j)
        {
            buf.sputc(j>i ? ' ' : '*');
        }
        buf.sputc('\n');
    }
    cout << buf.str();
    
    return 0;
}
