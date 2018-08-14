#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a;
    
    cin >> a;
    
    for (int i = 1; i <= 9; ++i) {
        cout << a << " * " << i << " = " << a * i << endl;
    }
    
    return 0;
}
