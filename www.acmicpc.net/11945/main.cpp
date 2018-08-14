#include <iostream>
#include <algorithm>

int main (int argc, char** argv)
{
    int n, m;
    char str[12];
    std::cin >> n >> m;
    
    while (n-- > 0)
    {
        std::cin >> str;
        std::reverse(str, str+m);
        std::cout << str << std::endl;
    }
    
    return 0;
}
