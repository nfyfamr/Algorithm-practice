#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
    int a;
    ostringstream os;
    
    cin >> a;
    
    for (int i = a; i > 0; --i) {
        os << i << '\n';
    }
    cout << os.str();
    
    return 0;
}
