#include <cstdio>

int main(int argc, char** argv)
{
    for (int i = 0; i < 3; ++i)
    {
        int a, b, c, d;
        int sum;
        
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = a + b + c + d;
        printf("%c\n", (sum == 4) ? 'E' : 'D' - sum);
    }
    
    return 0;
}
