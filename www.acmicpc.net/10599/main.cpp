#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int a, b, c, d;
    
    while (scanf("%d %d %d %d", &a, &b, &c, &d))
    {
        if ((a | b | c | d) == 0)
        {
            break;
        }
        
        if (a > b)
        {
            swap(a, b);
        }
        if (c > d)
        {
            swap(c, d);
        }
        
        printf("%d %d\n", c-b, d-a);
    }
    
    return 0;
}
