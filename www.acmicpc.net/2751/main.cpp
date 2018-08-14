#include <iostream>
#include <bitset>

int main (int argc, char** argv)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    std::bitset<2000001> bs;
    int N, j;
    
    std::cin >> N;
    for (int i=0; i<N; ++i)
    {
        std::cin >> j;
        bs.set(j + 1000000);
    }
    
    for (int i=0; i<bs.size(); ++i)
    {
        if (bs.test(i))
        {
            std::cout << i - 1000000 << std::endl;
        }
    }
    
    return 0;
}
