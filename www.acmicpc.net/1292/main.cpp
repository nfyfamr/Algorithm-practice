#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    
    int arr[1000];
    int s, e;
    int i;
    int base, offset;
    
    cin >> s >> e;
    ++e;
    
    arr[0] = 0;
    base = 1;
    offset = 0;
    for (i = 1; i < e; ++i)
    {
        arr[i] = arr[i - 1] + base;
        if (++offset == base)
        {
            offset = 0;
            ++base;
        }
    }
    
    cout << arr[e - 1] - arr[s - 1] << endl;
    
    return 0;
}
