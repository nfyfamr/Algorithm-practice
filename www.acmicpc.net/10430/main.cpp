#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a+b)%c << endl;
    cout << (a%c + b%c)%c << endl;
    cout << (a*b)%c << endl;
    cout << (a%c * b%c)%c << endl;
    
    return 0;
}
