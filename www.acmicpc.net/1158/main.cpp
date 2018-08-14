#include <vector>
#include <iterator>

int main (int argc, char** argv)
{
    std::vector<int> v;
    int n, m;
    
    std::cin >> n >> m;
    for (int i=0; i<n; ++i)
    {
        v.push_back(i+1);
    }
    
    std::cout << "<";
    auto it = v.begin();
    while (n-- > 0)
    {
        int j = m;
        while (--j > 0)
        {
            ++it;
            if (it == v.end())
            {
                it = v.begin();
            }
        }
        std::cout << *it;
        if (n == 0)
        {
            std::cout << ">";
        }
        else
        {
            std::cout << ", ";
        }
        v.erase(it);
        if (it == v.end())
        {
            it = v.begin();
        }
    }
    
    return 0;
}
