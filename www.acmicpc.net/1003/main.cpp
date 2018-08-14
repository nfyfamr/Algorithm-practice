#include <cstdio>

int main(int argc, char** argv)
{
    int T;
    int f[41][2];
    
    f[0][0] = 1;
    f[0][1] = 0;
    f[1][0] = 0;
    f[1][1] = 1;
    
    for (int i = 2; i < 41; ++i)
    {
        f[i][0] = f[i - 1][0] + f[i - 2][0];
        f[i][1] = f[i - 1][1] + f[i - 2][1];
    }
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int N;
        scanf("%d", &N);
        printf("%d %d\n", f[N][0], f[N][1]);
    }
    
    return 0;
}
