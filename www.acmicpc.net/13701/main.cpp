#include <iostream>
#include <bitset>

int main(int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::bitset<33554432> bs;
    int i;
    
    while (std::cin >> i)
    {
        if (!bs.test(i))
        {
            std::cout << i << " ";
            bs.set(i);
        }
    }
    
    return 0;
}
