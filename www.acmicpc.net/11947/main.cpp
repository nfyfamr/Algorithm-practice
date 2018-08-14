#include <iostream>

int GetFemale (int);

int main(int argc, char** argv)
{
    int T;
    int n, last_n;
    int max;
    int lovely;
    
    std::cin >> T;
    while (T-- > 0)
    {
        std::cin >> n;
        
        int i = last_n > n ? 1 : last_n;
        last_n = n;
        for (; i<=n; ++i)
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
