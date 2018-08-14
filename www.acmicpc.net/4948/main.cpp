#include <cstdio>
#include <bitset>

using namespace std;

int main(int argc, char** argv)
{
    bitset<123456 * 2 + 1> prime;
    int *sumPrime = new int[123456 * 2 + 1];
    int N;
    
    prime.set();
    prime[1] = false;
    sumPrime[1] = 0;
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
    
    delete[] sumPrime;
    return 0;
}
