#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int N, X;
    int A;
    vector<int> cont;
    ostream_iterator<int> out_iter(cout, " ");
    
    cin >> N >> X;
    while (N-- > 0)
    {
        cin >> A;
        if (A < X)
        {
            cont.push_back(A);
        }
    }
    copy(cont.begin(), cont.end(), out_iter);
    cout << endl;
    
    return 0;
}
