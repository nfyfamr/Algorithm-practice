#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int num[10] = { 0, };
    int A, B, C;
    string str;
    
    cin >> A >> B >> C;
    str = std::to_string(A * B * C);
    
    for_each(str.begin(), str.end(), [&num](char c) -> void {
        num[c - '0']++;
    });
    
    for (int i = 0; i < 10; ++i)
    {
        cout << num[i] << endl;
    }
    
    
    return 0;
}
