#include <cstdio>
#include <bitset>

char b[2000001] = {0, };

int main (int argc, char** argv)
{
    int N, j;
    
    scanf("%d", &N);
    for (int i=0; i<N; ++i)
    {
        scanf("%d", &j);
        b[j + 1000000] = 1;
    }
    
    for (int i=0; i<2000001; ++i)
    {
        if (b[i])
        {
            printf("%d\n", i-1000000);
        }
    }
    
    return 0;
}
