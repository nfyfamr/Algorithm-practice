#include <cstdio>
#include <bitset>
#include <array>

#define MAX_SIZE 2187

using namespace std;

void printStar(int x, int y, array<bitset<MAX_SIZE>, MAX_SIZE> &arr, int N);

int main(int argc, char** argv)
{
    int N;
    array<bitset<MAX_SIZE>, MAX_SIZE> starArr;
    
    scanf("%d", &N);
    printStar(0, 0, starArr, N);
    
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (starArr[j][i])
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

void printStar(int x, int y, array<bitset<MAX_SIZE>, MAX_SIZE> &arr, int N)
{
    if (N == 1)
    {
        arr[x][y] = true;
        return;
    }
    
    int interval = N / 3;
    for (int i = 0; i < 9; ++i)
    {
        if (i == 4) continue;
        printStar(x + interval*(i % 3), y + interval*(i / 3), arr, interval);
    }
}
