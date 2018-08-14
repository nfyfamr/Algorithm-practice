#include <iostream>

int main (int argc, char** argv)
{
    int A[9] = {0, };
    int B[9] = {0, };
    int sumA = 0, sumB = 0;
    int c = 0;
    
    std::cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4] >> A[5] >> A[6] >> A[7] >> A[8];
    std::cin >> B[0] >> B[1] >> B[2] >> B[3] >> B[4] >> B[5] >> B[6] >> B[7] >> B[8];
    
    for (int i=0; i<9; ++i)
    {
        sumA += A[i];
        if (sumA > sumB)
        {
            ++c;
        }
        sumB += B[i];
    }
    
    if (c > 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
