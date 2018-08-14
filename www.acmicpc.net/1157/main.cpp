#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    string str;
    unsigned int alpha[26] = { 0 };
    
    cin >> str;
    for_each(str.begin(), str.end(), [&alpha](char c) -> void {
        ++alpha[c >=97 ? c - 'a' : c - 'A'];
    });
    
    auto it_max = max_element(alpha, alpha + 26);
    
    if (*it_max == *max_element(it_max + 1, alpha + 26))
    {
        cout << "?" << endl;
    }
    else {
        cout << char('A' + distance(alpha, it_max)) << endl;
    }
    
    return 0;
}
