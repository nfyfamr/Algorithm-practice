#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    int RGB[2][3];
    
    scanf("%d", &N);
    scanf("%d %d %d", &RGB[0][0], &RGB[0][1], &RGB[0][2]);
    for (int i=1; i<N; ++i)
    {
        int r, g, b;
        scanf("%d %d %d", &r, &g, &b);
        
        RGB[i%2][0] = r + (RGB[(i - 1)%2][1] < RGB[(i - 1)%2][2] ? RGB[(i - 1)%2][1] : RGB[(i - 1)%2][2]);
        RGB[i%2][1] = g + (RGB[(i - 1)%2][0] < RGB[(i - 1)%2][2] ? RGB[(i - 1)%2][0] : RGB[(i - 1)%2][2]);
        RGB[i%2][2] = b + (RGB[(i - 1)%2][0] < RGB[(i - 1)%2][1] ? RGB[(i - 1)%2][0] : RGB[(i - 1)%2][1]);
    }
    printf("%d\n", *min_element(&RGB[(N - 1)%2][0], &RGB[(N - 1)%2][0] + 3));
    
    return 0;
}
