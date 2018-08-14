#include <iostream>
#include <cstdint>

char str[5000001];

int main (int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    
    int n;
    char c;
    int num;
    uint64_t sum = 0;
    uint32_t hidden = 0;
    
    std::cin >> n >> str;
    for (int i=0; i<n; ++i)
    {
        c = str[i];
        
        if (c >= '0' && c <= '9')
        {
            hidden = hidden * 10 + (c - '0');
        }
        else
        {
            sum += hidden;
            hidden = 0;
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
