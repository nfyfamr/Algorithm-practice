#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    
    int len_A, len_B;
    char* A = new char[100000000]();
    
    cin >> len_A >> len_B;
    
    int i, val;
    for (i = 0, val = 0; i < len_A; ++i)
    {
        cin >> val;
        A[val] = true;
    }
    
    int comp;
    int num_intersection = 0;
    for (i = 0; i < len_B; ++i)
    {
        cin >> comp;
        if (A[comp] == true) {
            ++num_intersection;
        }
    }
    
    cout << len_A + len_B - num_intersection * 2;
    
    return 0;
}
