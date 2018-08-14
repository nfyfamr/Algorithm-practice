#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    int sum;
    
    sum = 0;
    for (int i=0; i<5; ++i)
    {
        cin >> n;
        sum += n;
    }
    cout << sum << endl;
    
    return 0;
}
