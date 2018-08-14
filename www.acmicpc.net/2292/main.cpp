#include <cstdio>

inline int an(int i)
{
    return (3 * i*i) - (3 * i) + 1;
}

int main(int argc, char** argv)
{
    int N;
    int i, t;
    
    scanf("%d", &N);
    for (i = 1, t = an(i); t < N; ++i, t = an(i));
    
    printf("%d\n", i);
    
    return 0;
}
