#include <cstdio>

#define MAX 1000000

int main(int argc, char** argv)
{
    int N;
    int *arr = new int[MAX+1];
    
    arr[1] = 0;
    
    scanf("%d", &N);
    for (int i = 2; i <= N; ++i)
    {
        int ret = MAX;
        if (!(i % 3))
        {
            ret = arr[i / 3] + 1;
        }
        if (!(i % 2))
        {
            ret = (arr[i / 2] + 1 < ret) ? (arr[i / 2] + 1) : ret;
        }
        arr[i] = (arr[i - 1] + 1 < ret) ? (arr[i - 1] + 1) : ret;
    }
    
    printf("%d\n", arr[N]);
    
    delete[] arr;
    return 0;
}
