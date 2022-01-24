#include <iostream>
#include <set>

int main(int argc, char** argv)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int len_A, len_B;
    std::set<int> setA;

    std::cin >> len_A >> len_B;

    int i, val = 0;
    for (i = 0; i < len_A + len_B; ++i)
    {
        std::cin >> val;
        setA.insert(val);
    }

    std::cout << 2*setA.size() - len_A - len_B;

    return 0;
}
