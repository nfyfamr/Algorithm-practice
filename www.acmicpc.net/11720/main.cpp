#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    int sum;
    string number;
    
    sum = 0;
    cin >> N >> number;
    for (int i = 0; i < N; ++i)
    {
        sum += number[i] - '0';
    }
    cout << sum << endl;
    
    return 0;
}
