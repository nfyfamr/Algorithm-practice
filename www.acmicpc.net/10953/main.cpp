#include <cstdio>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int a, b;
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }
    
    return 0;
}
