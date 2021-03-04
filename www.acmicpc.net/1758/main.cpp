#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, tips[100000], total = 0;

    cin >> N;
    for (int i=0; i<N; ++i) {
        cin >> tips[i];
    }

    sort(tips, tips+N);

    for (int i=0; i<N; ++i) {
        int tip = tips[N-i-1] - i;
        if (tip <= 0) break;
        total += tip;
    }

    cout << total << endl;

    return 0;
}
