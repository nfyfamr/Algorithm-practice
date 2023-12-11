#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> freq(8001, 0);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
        freq[nums[i] + 4000] += 1;
        sum += nums[i];
    }

    sort(nums.begin(), nums.end());
    auto f_max_el = max_element(freq.begin(), freq.end());
    auto s_max_el = max_element(f_max_el + 1, freq.end());

    cout << int(round(sum / float(n))) << '\n';
    cout << nums[n / 2] << '\n';
    cout << (*f_max_el == *s_max_el ? s_max_el : f_max_el) - freq.begin() - 4000 << '\n';
    cout << nums.back() - nums.front();
}
