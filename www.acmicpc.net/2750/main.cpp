#include <iostream>
#include <algorithm>

int main (int argc, char** argv)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int N;
    int arr[1000];
    
    std::cin >> N;
    for (int i=0; i<N; ++i)
    {
        std::cin >> arr[i];
    }
    
    std::sort(arr, arr+N);
    
    for (int i=0; i<N; ++i)
    {
        std::cout << arr[i] << '\n';
    }
    
    return 0;
}
