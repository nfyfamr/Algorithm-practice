#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
    int C;
    
    scanf("%d", &C);
    while (C-- > 0)
    {
        int N;
        int sum, avr;
        char points[1000] = { 0 };
        double numOfOverAverage;
        
        sum = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; ++i)
        {
            scanf("%d", &points[i]);
            sum += points[i];
        }
        
        avr = sum / N;
        numOfOverAverage = count_if(points, points + N, [&avr](char e) -> bool {
            return e > avr;
        });
        
        printf("%.3f%%\n", numOfOverAverage/N*100);
    }
    return 0;
}
