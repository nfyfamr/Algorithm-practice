#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    char c = ' ';
    int num = 0;
    int sign = 1;

    while (cin.get(c))
    {

        if (c >= '0' && c <= '9')
        {
            num = num * 10 + (c - '0');
        }
        else
        {
            nums.push_back(num * sign);
            num = 0;
            if (sign == 1 && c == '-') sign = -1;
        }
    }
    nums.push_back(num * sign); // For the last number

    num = accumulate(nums.begin(), nums.end(), decltype(nums)::value_type(0));
    cout << num << endl;
}
