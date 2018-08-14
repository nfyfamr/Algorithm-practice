#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    double sum;
    double max_p;
    vector<double> p;
    
    sum = 0;
    p.reserve(1024);
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        int n;
        scanf("%d", &n);
        p.push_back(n);
    }
    
    max_p = *max_element(p.begin(), p.end());
    for_each(p.begin(), p.end(), [&sum, &max_p](double e) -> void {
        sum += e / max_p * 100;
    });
    printf("%.2f\n", double(sum) / N);
    
    return 0;
}
