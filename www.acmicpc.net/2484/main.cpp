#include <iostream>

int GetReward (int*);

int main (int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    
    int N;
    int max = 0;
    int t[4];
    int r;
    
    std::cin >> N;
    while (N-- > 0)
    {
        std::cin >> t[0] >> t[1] >> t[2] >> t[3];
        
        r = GetReward(t);
        max = max < r ? r : max;
    }
    
    std::cout << max << std::endl;
    
    return 0;
}

int GetReward (int *t)
{
    int dice[7] = {0, };
    int reward = 0;
    bool e = false;
    
    for (int i=0; i<4; ++i)
    {
        ++dice[t[i]];
    }
    
    for (int i=0; i<7; ++i)
    {
        switch (dice[i])
        {
            case 4: e = true; reward += 50000 + i*5000; break;
            case 3: e = true; reward += 10000 + i*1000; break;
            case 2: e = true; reward += 2000  + i*500; break;
            case 1: if (!e)   reward  =         i*600; break;
        }
    }
    
    return reward;
}
