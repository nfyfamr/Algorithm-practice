#include <cstdio>
#include <array>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    int N, M;
    array<int, 100001> bucket;
    
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &bucket[i]);
    }
    
    scanf("%d", &M);
    while (M-- > 0)
    {
        int t;
        scanf("%d", &t);
        if (find(bucket.begin(), bucket.begin() + N, t) != bucket.begin() + N)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    
    return 0;
}
