#include <iostream>

int main(int argc, char** argv)
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    int case1 = a + d;
    int case2 = b + c;
    
    std::cout << (case1 > case2 ? case2 : case1);
    return 0;
}
