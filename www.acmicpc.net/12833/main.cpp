#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int A, B, C;
    
    cin >> A >> B >> C;
    cout << ((C % 2 == 0) ? A : A^B) << endl;
    
    return 0;
}
