#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int coin[10], N, K;
    int count = 0;

    cin >> N >> K;
    for (int i=0; i<N; ++i) {
        cin >> coin[i];
    }

    for (int i=N-1; i>-1; --i) {
        count += K / coin[i];
        K %= coin[i];
    }

    cout << count;

    return 0;
}
