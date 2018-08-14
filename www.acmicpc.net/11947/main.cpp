#include <iostream>

int GetFemale (int);

int main(int argc, char** argv)
{
    int T;
    int n;
    int max;
    int lovely;
    
    std::cin >> T;
    while (T-- > 0)
    {
        std::cin >> n;
        
        for (int i=1; i<=n; ++i)
        {
            lovely = i * GetFemale(i);
            max = max < lovely ? lovely : max;
        }
        std::cout << max << std::endl;
    }
    
    return 0;
}

int GetFemale (int n)
{
    int f = 0;
    
    for (int i=n; i!=0; i/=10)
    {
        f = f*10 + 9;
    }
    
    f = f - n;
    return f;
}
