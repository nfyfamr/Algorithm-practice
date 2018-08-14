#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int T;
    long long p[45];
    
    p[0] = 1;
    p[1] = 1;
    for (int i = 2; i < 45; ++i)
    {
        p[i] = p[i - 1] + p[i - 2];
    }
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int n;
        vector<int> v;
        
        scanf("%d", &n);
        for (int i = 44; i >= 0; --i)
        {
            if (p[i] <= n)
            {
                n -= p[i];
                v.push_back(p[i]);
            }
            if (n == 0) break;
        }
        for (auto it = v.rbegin(); it != v.rend(); ++it)
        {
            printf("%d ", *it);
        }
        printf("\n");
    }
    
    return 0;
}
