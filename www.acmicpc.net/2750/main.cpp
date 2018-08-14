#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    vector<int> arr;
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int n;
        scanf("%d", &n);
        arr.push_back(n);
    }
    for (auto it = arr.begin(); it != arr.end()-1; ++it)
    {
        auto min = min_element(it+1, arr.end());
        if (*it > *min)
        {
            swap(*it, *min);
        }
        printf("%d\n", *it);
    }
    printf("%d\n", arr.back());
    
    return 0;
}
