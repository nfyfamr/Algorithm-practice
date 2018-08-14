#include <algorithm>

int main (int argc, char** argv)
{
    int arr[8];
    
    std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7];
    std::cout << std::max(std::max(arr[1], arr[1]-arr[2]+arr[3]), arr[6]) << std::endl;
    
    return 0;
}
