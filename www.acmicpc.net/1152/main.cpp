#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char** argv)
{
    int count;
    std::string str;
    
    std::getline(std::cin, str);
    
    std::string::iterator itBegin = str.begin();
    std::string::iterator itEnd = str.end()-1;
    
    for (; *itBegin == ' '; ++itBegin);
    for (; *itEnd == ' '; --itEnd);
    
    count = std::count(itBegin, itEnd, ' ');
    std::cout << count+1 << std::endl;
    
    return 0;
}
