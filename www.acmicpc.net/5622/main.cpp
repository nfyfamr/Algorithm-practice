#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    string str;
    int alpha[] = {
        2, 2, 2,
        3, 3, 3,
        4, 4, 4,
        5, 5, 5,
        6, 6, 6,
        7, 7, 7, 7,
        8, 8, 8,
        9, 9, 9, 9
    };
    int sum;
    
    sum = 0;
    cin >> str;
    for_each(str.begin(), str.end(), [&sum, &alpha](char c) {
        sum += alpha[c - 'A']+1;
    });
    cout << sum << endl;
    
    return 0;
}
