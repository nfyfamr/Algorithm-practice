a#include <cstdio>
#include <array>

using namespace std;

void checkSelfNumber(array<char, 10001> &, int);

int main(int argc, char** argv)
{
    array<char, 10001> self;
    
    self.fill(0);
    for (int i=1; i<10001; ++i)
    {
        if (self[i])
        {
            continue;
        }
        checkSelfNumber(self, i);
        printf("%d\n", i);
    }
    
    return 0;
}

void checkSelfNumber(array<char, 10001> &self, int c)
{
    int next = c + c / 1000 + (c / 100)%10 + (c / 10)%10 + c % 10;
    
    if (next < 10000 && self[next] == 0)
    {
        self[next] = 1;
        return checkSelfNumber(self, next);
    }
    else
    {
        if (next == 10000)
        {
            self[next] = 1;
        }
        return;
    }
}
