#include <cstdio>

int main(int argc, char** argv)
{
    int a, b, c, d;
    int sum;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a + b + c + d;
    
    printf("%d\n%d\n", sum / 60, sum % 60);
    
    return 0;
}
