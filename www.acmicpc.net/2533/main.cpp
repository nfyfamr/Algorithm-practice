#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

std::pair<int,int> v[1000001] = {};

std::pair<int,int> value(std::vector<std::vector<int>>& tree, int node, int parent)
{
    if (tree[node].size() == 0) return std::make_pair(1, 0);
    if (v[node].first!=0 && v[node].second!=0) return v[node];
    int x0 = 1, x1 = 0;
    for (auto iter=tree[node].begin(); iter!=tree[node].end(); ++iter)
    {
        if (*iter == parent) continue;
        auto vv = value(tree, *iter, node);
        x0 += std::min(vv.first, vv.second);
        x1 += value(tree, *iter, node).first;
    }
    v[node] = std::make_pair(x0, x1);
    return v[node];
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::vector<std::vector<int>> tree(1000001);
    int n;
    std::cin >> n;
    for (int i=0; i<n-1; ++i)
    {
        int s, d;
        std::cin >> s >> d;
        tree[s].push_back(d);
        tree[d].push_back(s);
    }

    auto vv = value(tree, 1, -1);
    std::cout << std::min(vv.first, vv.second) << std::endl;
}
