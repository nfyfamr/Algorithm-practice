#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        int a, b;
        cin >> a >> b;
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }
    
    return 0;
}
