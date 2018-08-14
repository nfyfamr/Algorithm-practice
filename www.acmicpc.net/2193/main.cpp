#include <cstdio>

using namespace std;

int main() {
    int N;
    long long p[90][2];
    
    p[0][0] = 0;
    p[0][1] = 1;
    scanf("%d", &N);
    for (int i = 1; i < N; ++i)
    {
        p[i][0] = p[i - 1][0] + p[i - 1][1];
        p[i][1] = p[i - 1][0];
    }
    printf("%lld\n", p[N - 1][0] + p[N - 1][1]);
    
    return 0;
}
