#include <iostream>
#include <iterator>
#include <algorithm>
#include <array>

using namespace std;

int main(int argc, char** argv)
{
    
    int len_A, len_B;
    int i;
    array<int, 200000> A;
    
    cin >> len_A >> len_B;
    
    for (i = 0; i < len_A; ++i)
    {
        cin >> A[i];
    }
    
    auto begin = A.begin();
    auto end = A.end();
    int comp;
    int num_intersection = 0;
    for (i = 0; i < len_B; ++i)
    {
        cin >> comp;
        auto result = std::find(begin, end, comp);
        
        if (result != A.end())
        {
            ++num_intersection;
            begin = result;
        }
    }
    
    cout << len_A + len_B - num_intersection * 2;
    
    return 0;
}
