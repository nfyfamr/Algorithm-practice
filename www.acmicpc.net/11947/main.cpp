#include <iostream>
#include <cmath>
#include <cstdint>

int64_t GetDigitOf (int64_t);
inline int64_t GetLovely (int64_t, int64_t);

int main(int argc, char** argv)
{
    int T;
    int64_t n, digit;
    int64_t top, half;
    int64_t lovely, max;
    
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

int64_t GetDigitOf (int64_t n)
{
    int64_t d = 1;
    while (n/=10)
    {
        ++d;
    }
    
    return d;
}

inline int64_t GetLovely (int64_t n, int64_t t)
{
    return n * (t - n - 1);
}
