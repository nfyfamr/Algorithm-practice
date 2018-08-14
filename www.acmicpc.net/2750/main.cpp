#include <cstdio>
#include <algorithm>
#include <array>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    array<int, 1001> bucket;
    
    bucket.fill(-1);
    scanf("%d", &T);
    while (T-- > 0)
    {
        int n;
        scanf("%d", &n);
        bucket[n] = n;
    }
    for_each(std::begin(bucket), std::end(bucket), [](int n) -> void {
        if (n != -1)
        {
            printf("%d\n", n);
        }
    });
    
    return 0;
}
