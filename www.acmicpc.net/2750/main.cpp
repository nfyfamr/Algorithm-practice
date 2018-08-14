#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    char bucket[1001] = { 0 };
    
    T = getc(stdin) - '0'; getc(stdin);
    while (T-- > 0)
    {
        int n;
        n = getc(stdin) - '0'; getc(stdin);
        bucket[n] = n;
    }
    for_each(std::begin(bucket), std::end(bucket), [](char c) -> void {
        if (c != 0)
        {
            fputc(c + '0', stdout);
            fputc('\n', stdout);
        }
    });
    
    
    return 0;
}
