#include <cstdio>
#include <bitset>

using namespace std;

int main(int argc, char** argv)
{
    bitset<1001> prime;
    int N;
    
    prime.set();
    prime[1] = false;
    for (int i = 2; i <= 1000; ++i)
    {
        if (prime[i])
        {
            for (int j = 2; i*j <= 1000; ++j)
            {
                prime[i*j] = false;
            }
        }
    }
    
    int count = 0;
    scanf("%d", &N);
    while (N-- > 0)
    {
        int n;
        scanf("%d", &n);
        
        if (prime[n])
        {
            ++count;
        }
    }
    printf("%d\n", count);
}
