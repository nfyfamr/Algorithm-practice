#include <iostream>

int main (int argc, char** argv)
{
    char n[101];
    int i = 0;
    
    std::cin >> n;
    do
    {
        if (n[i] >= 'A' && n[i] <= 'Z')
        {
            std::cout << n[i];
        }
    } while (n[++i] != '\0');
    std::cout << '\n';
    
    return 0;
}
