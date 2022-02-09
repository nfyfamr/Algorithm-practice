#include <iostream>
#include <vector>

using namespace std;
using ull_t = unsigned long long int;

bool test(vector<int>&, int, int);

int main(int argc, char** argv)
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    vector<int> trees;

    cin >> N >> M;

    int tallest = -1;
    for (int i = 0; i < N; ++i)
    {
        int h;
        cin >> h;
        trees.push_back(h);
        tallest = (tallest > h ? tallest : h);
    }

    int low = 0;
    int high = tallest;
    while (high - low > 1)
    {
        int m = (low + high) / 2;
        if (test(trees, m, M))
        {
            low = m;
        }
        else
        {
            high = m;
        }
    }

    cout << low << '\n';

    return 0;
}


bool test(vector<int>& trees, int cut_height, int target)
{
    ull_t cut_sum = 0;
    for (auto tree_height : trees)
    {
        cut_sum += (tree_height > cut_height ? tree_height - cut_height : 0);
    }

    return cut_sum >= target;
}
