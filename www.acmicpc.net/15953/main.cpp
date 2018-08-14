#include <iostream>

inline int GetPrizeA (int);
inline int GetPrizeB (int);

int main(int argc, char** argv)
{
    int a, b, T;
    int supp;
    
    std::cin >> T;
    while (T-- > 0)
    {
        std::cin >> a >> b;
        supp = GetPrizeA(a) + GetPrizeB(b);
        supp *= 10000;
        std::cout << supp << std::endl;
    }
    
    return 0;
}

inline int GetPrizeA (int g)
{
    if (g == 0)
    {
        return 0;
    }
    else if (g <= 1)
    {
        return 500;
    }
    else if (g <= 3)
    {
        return 300;
    }
    else if (g <= 6)
    {
        return 200;
    }
    else if (g <=10)
    {
        return 50;
    }
    else if (g <= 15)
    {
        return 30;
    }
    else if (g <= 21)
    {
        return 10;
    }
    else
    {
        return 0;
    }
}

inline int GetPrizeB (int g)
{
    if (g == 0)
    {
        return 0;
    }
    else if (g <= 1)
    {
        return 512;
    }
    else if (g <= 3)
    {
        return 256;
    }
    else if (g <= 7)
    {
        return 128;
    }
    else if (g <= 15)
    {
        return 64;
    }
    else if (g <= 31)
    {
        return 32;
    }
    else
    {
        return 0;
    }
}
