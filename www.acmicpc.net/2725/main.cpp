#include <iostream>
#include <numeric>

#define MAX_N 1000

using namespace std;

void findSeenPoints(unsigned int*);

int main(int argc, char** argv) {
    int test_case_count;
    unsigned int seen_points[MAX_N + 1];

    findSeenPoints(seen_points);

    cin >> test_case_count;

    for (int i = 0; i < test_case_count; ++i) {
        int N;
        cin >> N;
        cout << seen_points[N] << endl;
    }

    return 0;
}

void findSeenPoints(unsigned int* seen_points) {
    // Initialize
    seen_points[0] = 0;
    seen_points[1] = 3;

    // Find seen points
    for (int i = 2; i <= MAX_N; ++i) {
        // Number of seen points
        int count = 0;

        // Ignore edge cases where j=0 and j=i
        for (int j = 1; j < i; ++j) {
            int gcd = std::gcd(i, j);
            if (gcd == 1) ++count;
        }

        // Total seen points at N=i
        seen_points[i] = count * 2 + seen_points[i - 1];
    }

    return;
}
