#include <iostream>
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
    auto b = v.begin();
    int i = 0;
    while (v.size() > 1)
    {
        i += m-1;
        i %= v.size();
        std::cout << v[i] << ", ";
        v.erase(b + i);
    }
    
    i += m-1;
    i %= v.size();
    std::cout << v[i] << ">" << std::endl;
    
    return 0;
}
