#include <iostream>
#include <cstring>
#include <algorithm>

int main (int argc, char** argv)
{
    char N[11];
    int d;
    
    std::cin >> N;
    d = strlen(N);
    std::sort(N, N+d, [](auto a, auto b) -> bool { return (int)a > (int)b; });
    
    std::cout << N << std::endl;
    
    return 0;
}
