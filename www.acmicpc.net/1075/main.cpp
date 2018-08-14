#include <cstdio>

int main(int argc, char** argv)
{
    int N, F;
    int t;
    
    scanf("%d %d", &N, &F);
    N = N / 100 * 100;
    t = N % F;
    t = t ? t : F;
    printf("%02d\n", F - t);
    
    return 0;
}
