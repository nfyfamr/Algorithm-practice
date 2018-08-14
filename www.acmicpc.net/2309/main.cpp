#include <iostream>
#include <algorithm>

void FindSumXComposition();

int i, j, sum;
int dwarf[9];

int main (int argc, char** argv)
{
    sum = 0;
    
    for (int i=0; i<9; ++i)
    {
        std::cin >> dwarf[i];
        sum += dwarf[i];
    }
    
    sum -= 100;
    
    FindSumXComposition();
    std::sort(dwarf, dwarf+9);
    
    for (int i=0; i<7; ++i)
    {
        std::cout << dwarf[i] << std::endl;
    }
    
    return 0;
}

void FindSumXComposition()
{
    for (i=0; i<9; ++i)
    {
        for (j=i+1; j<9; ++j)
        {
            if (dwarf[i] + dwarf[j] == sum)
            {
                dwarf[i] = dwarf[j] = 101;
                return;
            }
        }
    }
}
