#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <iterator>

using namespace std;

int main()
{
    array<int, 26> alpha;
    string str;
    ostream_iterator<int, char> out_iter(cout, " ");
    
    alpha.fill(-1);
    cin >> str;
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        if (alpha[*it - 'a'] == -1)
        {
            alpha[*it - 'a'] = distance(str.begin(), it);
        }
    }
    copy(alpha.begin(), alpha.end(), out_iter);
    cout << endl;
    
    return 0;
}
