#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char** argv)
{
    int count;
    std::string str;
    
    std::getline(std::cin, str);
    count = std::count(str.begin(), str.end(), ' ');
    std::cout << count+1 << std::endl;
    
    return 0;
}
