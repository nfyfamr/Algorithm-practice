#include <cstdio>

int main(int argc, char** argv)
{
    int N;
    int t;
    bool bucket[1000001] = { 0 };
    
    scanf("%d", &N);
    while (N-- > 0)
    {
        scanf("%d", &t);
        bucket[t] = true;
    }
    for (int i = 1; i < 1000001; ++i)
    {
        if (bucket[i])
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
