#include <cstdio>
#include <bitset>
#include <vector>

#define MAX_SIZE 3072*2

using namespace std;

void printStar(int x, int y, vector<bitset<MAX_SIZE>> &arr, int N);

int main(int argc, char** argv)
{
    int N;
    vector<bitset<MAX_SIZE>> starArr(MAX_SIZE);
    
    scanf("%d", &N);
    printStar(N, 1, starArr, N);
    
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N * 2; ++j)
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

void printStar(int x, int y, vector<bitset<MAX_SIZE>> &arr, int N)
{
    if (N == 3)
    {
        arr[x-1][y-1] = true;
        arr[x - 2][y] = true;
        arr[x][y] = true;
        arr[x - 3][y + 1] = true;
        arr[x - 2][y + 1] = true;
        arr[x - 1][y + 1] = true;
        arr[x][y + 1] = true;
        arr[x + 1][y + 1] = true;
        return;
    }
    
    int next = N / 2;
    printStar(x - next, y + next, arr, next);
    printStar(x, y, arr, next);
    printStar(x + next, y + next, arr, next);
    return;
}
