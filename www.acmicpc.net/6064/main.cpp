#include <cstdio>

int main(int argc, char** argv)
{
    int T;
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int X[2], Y[2];
        int *x, *y;
        int b;
        
        scanf("%d %d %d %d", &X[0], &Y[0], &X[1], &Y[1]);
        
        if (X[0] == 1)
        {
            printf("%d\n", Y[1]);
            continue;
        }
        else if (Y[0] == 1)
        {
            printf("%d\n", X[1]);
            continue;
        }
        
        if (X[0] < Y[0])
        {
            x = X;
            y = Y;
        }
        else
        {
            x = Y;
            y = X;
        }
        
        // k = aN + x = bM + y
        // x mod N = (b mod N * M mod N + y mod N) mod N
        for (b = 0; b < x[0]; ++b)
        {
            if (x[1] == ((b * (y[0] % x[0]) + y[1] % x[0]) % x[0]))
            {
                break;
            }
        }
        if (b == x[0])
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", b * y[0] + y[1]);
        }
    }
    return 0;
}
