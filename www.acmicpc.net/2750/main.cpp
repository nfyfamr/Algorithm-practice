#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    int bucket[1001] = { 0 };
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int n;
        scanf_s("%d", &n);
        bucket[n] = n;
    }
    for_each(std::begin(bucket), std::end(bucket), [](int n) -> void {
        if (n != 0)
        {
            printf("%d\n", n);
        }
    });
    
    
    return 0;
}
