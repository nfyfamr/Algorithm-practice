int main(int argc, char** argv)
{
    int T;
    char m[10][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {8, 2, 4, 6},
        {1, 3, 9, 7},
        {6, 4, 6, 4},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {1, 7, 9, 3},
        {6, 8, 4, 2},
        {1, 9, 1, 9}
    };
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        a = a % 10;
        b = b % 4;
        printf("%d\n", m[a][b]);
    }
    
    return 0;
}
