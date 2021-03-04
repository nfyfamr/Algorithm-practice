#include <iostream>

using namespace std;

int binomial_coefficient(int, int);

int main(int argc, char** argv)
{
    int N, K, result;

    cin >> N >> K;
    result = binomial_coefficient(N, K);
    cout << result;

    return 0;
}

int binomial_coefficient(int N, int K) {
    int L = N - K;
    if (K < L) {
        swap(K, L);
    }

    int numer = 1, denom = 1;
    for (int i=0; i<L; ++i) {
        numer *= N--;
        denom *= L-i;
    }

    return numer / denom;
}
