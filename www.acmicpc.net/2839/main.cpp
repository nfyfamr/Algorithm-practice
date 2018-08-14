#include <cstdio>

int main(int argc, char** argv)
{
    int N;
    int result;
    
    scanf("%d", &N);
    switch (N % 10)
    {
        case 0:
            result = N / 5;
            break;
        case 1:
            result = N / 5 + 1;
            break;
        case 2:
            result = N / 5 + 2;
            break;
        case 3:
            result = N / 5 + 1;
            break;
        case 4:
            result = N < 12 ? -1 : (N / 5 + 2);
            break;
        case 5:
            result = N / 5;
            break;
        case 6:
            result = N / 5 + 1;
            break;
        case 7:
            result = N < 27 ? -1 : (N / 5 + 4);
            break;
        case 8:
            result = N / 5 + 1;
            break;
        case 9:
            result = N / 5 + 2;
            break;
    }
    printf("%d\n", result);
    
    return 0;
}
