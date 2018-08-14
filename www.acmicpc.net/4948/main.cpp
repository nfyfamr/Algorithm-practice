#include <cstdio>
#include <bitset>

using namespace std;

int main(int argc, char** argv)
{
    bitset<123456 * 2 + 1> prime;
    unsigned _int32 sumPrime[123456 * 2 + 1] = { 0 };
    int N;
    
    prime.set();
    prime[1] = false;
    for (int i = 2; i <= 123456 * 2; ++i)
    {
        sumPrime[i] = sumPrime[i - 1];
        if (prime[i])
        {
            ++sumPrime[i];
            for (int j = 2; i*j <= 123456 * 2; ++j)
            {
                prime[i*j] = false;
            }
        }
    }
    
    for (;;)
    {
        scanf("%d", &N);
        if (N == 0)
        {
            break;
        }
        printf("%d\n", sumPrime[2 * N] - sumPrime[N]);
    }
    
    return 0;
}
