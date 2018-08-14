#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char** argv)
{
    bitset<42> bs;
    int i, val;
    
    for (i = 0; i < 10; ++i)
    {
        cin >> val;
        bs.set(val % 42);
    }
    
    cout << bs.count() << endl;
    
    return 0;
}
