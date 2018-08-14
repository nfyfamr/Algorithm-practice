#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
    int a;
    ostringstream os;
    
    cin >> a;
    
    for (int i = 1; i < a+1; ++i) {
        os << i << '\n';
    }
    cout << os.str();
    
    return 0;
}
