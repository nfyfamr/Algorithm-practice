#include <cstdio>

using namespace std;

int main(int argc, char** argv)
{
    int a, b, c;
    int m;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a >= b && b >= c) || (a <= b && b <= c))
    {
        m = b;
    }
    else if ((a >= c && c >= b) || (a <= c && c <= b))
    {
        m = c;
    }
    else if ((b >= a && a >= c) || (b <= a && a <= c))
    {
        m = a;
    }
    printf("%d\n", m);
    
    return 0;
}
