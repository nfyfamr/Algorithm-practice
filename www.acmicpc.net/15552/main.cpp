#include <iostream>

int main (int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int T;
    int a, b;
    
    std::cin >> T;
    while (T-- > 0)
    {
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }
    
    return 0;
}
