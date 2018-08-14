#include <cstdio>
#include <array>

using namespace std;

int main(int argc, char** argv)
{
    int N, M;
    array<int, 101> ball;
    
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N + 1; ++i)
    {
        ball[i] = i;
    }
    
    while (M-- > 0)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        swap(ball[a], ball[b]);
    }
    
    for (int i = 1; i < N + 1; ++i)
    {
        printf("%d ", ball[i]);
    }
    putc('\n', stdout);
    
    return 0;
}
