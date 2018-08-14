#include <iostream>
#include <cmath>

int GetDigitOf (int);
inline double GetLovely (int, int);

int main(int argc, char** argv)
{
    int T;
    unsigned int n, digit;
    unsigned int top, half;
    double lovely, max;
    
    std::cin >> T;
    while (T-- > 0)
    {
        std::cin >> n;
        digit = GetDigitOf(n);
        
        top = std::pow(10, digit);
        half = top / 2;
        max = half > n ? GetLovely(n, top) : GetLovely(half, top);
        
        std::cout << max << std::endl;
    }
    
    return 0;
}

int GetDigitOf (int n)
{
    int d = 1;
    while (n/=10)
    {
        ++d;
    }
    
    return d;
}

inline double GetLovely (int n, int t)
{
    return n * (t - n - 1);
}
