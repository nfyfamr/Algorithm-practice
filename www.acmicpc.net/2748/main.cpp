#include <cstdio>

int main(int argc, char** argv)
{
    unsigned int n;
    unsigned long long F[91] = { 0 };
    
    F[0] = 0;
    F[1] = 1;
    scanf("%d", &n);
    
    for (unsigned int i = 2; i <= n; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    printf("%llu\n", F[n]);
    
    return 0;
}
