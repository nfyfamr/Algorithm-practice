#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void print_permute(int order, const vector<int> &nums, string str)
{
    if (order == 0)
    {
        cout << str << '\n';
        return ;
    }
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        vector<int> new_nums;
        new_nums.reserve(nums.size() - 1);
        new_nums.insert(new_nums.end(), nums.begin(), it);
        new_nums.insert(new_nums.end(), it + 1, nums.end());
        print_permute(order - 1, new_nums, str + to_string(*it) + ' ');
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    sort(nums.begin(), nums.end());

    print_permute(m, nums, "");
}
