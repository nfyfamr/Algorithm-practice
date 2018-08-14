#include <iostream>
#include <array>
#include <algorithm>

#define MAX_LEN 8

using namespace std;

int main(int argc, char** argv)
{
    array<int, MAX_LEN> A;
    int i, sum = 0;
    
    for (i = 0; i < MAX_LEN; ++i)
    {
        cin >> A[i];
        sum += A[i];
    }
    
    array<int, MAX_LEN> B = A;
    sort(B.begin(), B.end());
    
    sum -= B[0] + B[1] + B[2];
    cout << sum << endl;
    for (i = 0; i < MAX_LEN; ++i)
        if (A[i] > B[2])
            cout << i + 1 << " ";
    
    return 0;
}
