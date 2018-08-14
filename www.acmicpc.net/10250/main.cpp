#include <cstdio>

int main(int argc, char** argv)
{
    int T;
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);
        
        int n = ((N - 1) / H + 1) + ((N - 1) % H + 1) * 100;
        printf("%d\n", n);
    }
    return 0;
}
