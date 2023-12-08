#include<iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    std::string S;
    int i;
    cin >> S >> i;
    cout << S[i-1] << endl;
}
