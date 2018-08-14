#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    string str;
    int sum;
    
    sum = 0;
    cin >> str;
    for_each(str.begin(), str.end(), [&sum](char c) -> void {
        c = c - 'A';
        c = (c / 3) + 3;
        sum += (c == 11) ? c-1 : c;
    });
    cout << sum << endl;
    
    return 0;
}
