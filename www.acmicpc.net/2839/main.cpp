#include <cstdio>

int main(int argc, char** argv)
{
    int N;
    int t, m;
    int count;
    
    scanf("%d", &N);
    count = -1;
    for (t = N / 5; t >= 0; --t)
    {
        m = N - 5 * t;
        if (m % 3 == 0)
        {
            count = t + m / 3;
            break;
        }
    };
    printf("%d\n", count);
    
    return 0;
}
