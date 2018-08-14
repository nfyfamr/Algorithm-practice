#include <cstdio>

int main(int argc, char** argv)
{
    int X;
    int x, y;
    bool turnX;
    
    x = y = 1;
    turnX = true;
    scanf("%d", &X);
    for (int i = 1; i <= X; ++i)
    {
        if (i == X)
        {
            break;
        }
        
        if (turnX)
        {
            if (y == 1)
            {
                ++x;
                turnX = false;
            }
            else
            {
                ++x;
                --y;
            }
        }
        else
        {
            if (x == 1)
            {
                ++y;
                turnX = true;
            }
            else
            {
                --x;
                ++y;
            }
        }
    }
    
    printf("%d/%d\n", y, x);
}
