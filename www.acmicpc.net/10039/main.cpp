#include <cstdio>

int main(int argc, char** argv)
{
    int points[5] = { 0 };
    int sum = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &points[i]);
        sum += points[i] < 40 ? 40 : points[i];
    }
    printf("%d\n", sum / 5);
    
    return 0;
}
