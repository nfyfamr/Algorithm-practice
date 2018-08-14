#include <cstdio>

int main(int argc, char** argv)
{
    int N;
    int t;
    int count;
    
    count = 0;
    scanf("%d", &N);
    t = N;
    do {
        t = t % 10 * 10 + (t / 10 + t % 10) % 10;
        ++count;
    } while (N != t);
    printf("%d", count);
    
    return 0;
}
