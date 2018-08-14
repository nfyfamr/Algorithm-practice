#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    string s_input[3];
    int i_input[3];
    int i;
    
    i = 3;
    cin >> s_input[0] >> s_input[1] >> s_input[2];
    while (i-- > 0)
    {
        if (s_input[i] == "black")            i_input[i] = 0;
        else if (s_input[i] == "brown")        i_input[i] = 1;
        else if (s_input[i] == "red")        i_input[i] = 2;
        else if (s_input[i] == "orange")    i_input[i] = 3;
        else if (s_input[i] == "yellow")    i_input[i] = 4;
        else if (s_input[i] == "green")        i_input[i] = 5;
        else if (s_input[i] == "blue")        i_input[i] = 6;
        else if (s_input[i] == "violet")    i_input[i] = 7;
        else if (s_input[i] == "grey")        i_input[i] = 8;
        else if (s_input[i] == "white")        i_input[i] = 9;
    }
    cout << (long long)((i_input[0] * 10 + i_input[1]) * pow(10, i_input[2])) << endl;
    
    return 0;
}
