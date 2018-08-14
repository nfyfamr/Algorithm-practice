#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
    int T;
    char bucket[1001] = { 0 };
    ostringstream os;
    
    cin >> T;
    while (T-- > 0)
    {
        int n;
        cin >> n;
        bucket[n] = (char)n;
    }
    for_each(std::begin(bucket), std::end(bucket), [&os](char c) -> void {
        if (c != 0)
        {
            os << (int)c << '\n';
        }
    });
    cout << os.str();
    
    
    return 0;
}
