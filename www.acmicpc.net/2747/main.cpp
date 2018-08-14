#include <cstdio>

int main(int argc, char** argv)
{
    unsigned int n;
    unsigned int F[46] = { 0 };
    
    F[0] = 0;
    F[1] = 1;
    scanf("%d", &n);
    
    for (unsigned int i = 2; i <= n; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    printf("%d\n", F[n]);
    
    return 0;
}
