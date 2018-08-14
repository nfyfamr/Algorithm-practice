#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int dwarfs[9];
    int sum = 0;
    
    for (int i = 0; i < 9; ++i)
    {
        scanf("%d", &dwarfs[i]);
        sum += dwarfs[i];
    }
    
    // 선택정렬하면서 답을 찾으면 더 빠를듯
    for (int i = 0; i < 8; ++i)
    {
        for (int j = i + 1; j < 9; ++j)
        {
            if (sum - dwarfs[i] - dwarfs[j] == 100)
            {
                dwarfs[i] = dwarfs[j] = 101;
                break;
            }
        }
    }
    sort(dwarfs, dwarfs+9);
    
    for (int i = 0; i < 7; ++i)
    {
        printf("%d ", dwarfs[i]);
    }
    printf("\n");
    
    return 0;
}
