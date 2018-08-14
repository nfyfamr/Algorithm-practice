#include <iostream>

int main (int argc, char** argv)
{
    int N;
    char gu[1001];
    int i = 0;
    int count = 0;
    
    std::cin >> N >> gu;
    if (gu[0] == 'W')
    {
        ++count;
    }
    while (gu[i])
    {
        if (gu[i] == 'E' && (gu[i+1] == 'W' || gu[i+1] == '\0'))
        {
            ++count;
        }
        ++i;
    }
    
    std::cout << count << std::endl;
    
    return 0;
}
