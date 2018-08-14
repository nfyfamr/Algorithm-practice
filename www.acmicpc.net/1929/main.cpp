#include <cstdio>
#include <bitset>

using namespace std;

int main(int argc, char** argv)
{
    bitset<1000001> prime;
    int N, M;
    
    prime.set();
    prime[1] = false;
    for (int i = 2; i <= 1000000; ++i)
    {
        if (prime[i])
        {
            for (int j = 2; i*j <= 1000000; ++j)
            {
                prime[i*j] = false;
            }
        }
    }
    
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; ++i)
    {
        if (prime[i])
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
