#include <cstdio>

int main(int argc, char** argv)
{
    int T;
    int k, n;
    int floor[15][15] = { { 0 } };
    
    for (int j = 0; j < 15; ++j)
    {
        floor[0][j] = j;
    }
    for (int i = 1; i < 15; ++i)
    {
        for (int j = 1; j < 15; ++j)
        {
            floor[i][j] = floor[i - 1][j] + floor[i][j - 1];
        }
    }
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", floor[k][n]);
    }
    
    return 0;
}
