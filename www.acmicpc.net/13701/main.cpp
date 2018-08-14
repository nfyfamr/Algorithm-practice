#include <iostream>
#include <bitset>
#include <ios>

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
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
