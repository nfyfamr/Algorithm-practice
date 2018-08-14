#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    int t;
    unsigned char count[10] = { 0 };
    string str;
    
    scanf("%d", &N);
    str = to_string(N);
    for (int i = 0; i < str.length(); ++i)
    {
        ++count[str[i] - '0'];
    }
    t = count[6] + count[9];
    count[6] = t / 2 + t % 2;
    printf("%d\n", *(max_element(count, count + 9)));
    
    return 0;
}
