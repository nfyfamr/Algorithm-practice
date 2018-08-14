#include <cstdio>
#include <bitset>

using namespace std;

int main(int argc, char** argv)
{
    bitset<10001> prime;
    int N, M;
    
    prime.set();
    prime[1] = false;
    for (int i = 2; i <= 10000; ++i)
    {
        if (prime[i])
        {
            for (int j = 2; i*j <= 10000; ++j)
            {
                prime[i*j] = false;
            }
        }
    }
    
    int sum, min;
    bool isMin = true;
    sum = min = 0;
    scanf("%d %d", &N, &M);
    for (int i = N; i <= M; ++i)
    {
        if (prime[i])
        {
            sum += i;
            if (isMin)
            {
                min = i;
                isMin = false;
            }
        }
    }
    if (sum == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
}
