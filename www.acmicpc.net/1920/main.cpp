#include <cstdio>

bool bucket[100001];
int main() {
    int N, M;
    
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        int t;
        scanf("%d", &t);
        bucket[t] = true;
    }
    
    scanf("%d", &M);
    while (M-- > 0)
    {
        int t;
        scanf("%d", &t);
        printf("%d\n", bucket[t]);
    }
    
    return 0;
}
