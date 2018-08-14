#include <cstdio>

int main(int argc, char** argv)
{
    int T;
    char m[10][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {2, 4, 8, 6},
        {3, 9, 7, 1},
        {4, 6, 4, 6},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {7, 9, 3, 1},
        {8, 4, 2, 6},
        {9, 1, 9, 1}
    };
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        a = a % 10;
        b = b % 4 - 1;
        b = b==-1 ? 3 : b;
        printf("%d\n", m[a][b]);
    }
    
    return 0;
}
