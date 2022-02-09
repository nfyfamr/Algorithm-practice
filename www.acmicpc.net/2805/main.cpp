#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& v, int cut);

int main(int argc, char** argv)
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    vector<int> trees;

    cin >> N >> M;

    int h;
    int tallest = -1;
    for (int i = 0; i < N; ++i)
    {
        cin >> h;
        trees.push_back(h);
        tallest = (tallest > h ? tallest : h);
    }

    int last_cut_height = 0;
    int cut_height = tallest / 2;
    int cut_sum = 0;
    while ((cut_sum = search(trees, cut_height)) != M)
    {
        int delta = abs(cut_height - last_cut_height) / 2;
        last_cut_height = cut_height;
        cut_height += (cut_sum > M ? delta : -delta);
    }

    cout << cut_height << '\n';

    return 0;
}


int search(vector<int>& trees, int cut_height)
{
    int cut_sum = 0;
    for (auto tree_height : trees)
    {
        cut_sum += (tree_height > cut_height ? tree_height - cut_height : 0);
    }

    return cut_sum;
}
