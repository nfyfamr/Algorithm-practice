#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string s_input[3];
    char c_input[3];
    int i;
    
    i = 3;
    cin >> s_input[0] >> s_input[1] >> s_input[2];
    while (i-- > 0)
    {
        if (s_input[i] == "black")            c_input[i] = '0';
        else if (s_input[i] == "brown")        c_input[i] = '1';
        else if (s_input[i] == "red")        c_input[i] = '2';
        else if (s_input[i] == "orange")    c_input[i] = '3';
        else if (s_input[i] == "yellow")    c_input[i] = '4';
        else if (s_input[i] == "green")        c_input[i] = '5';
        else if (s_input[i] == "blue")        c_input[i] = '6';
        else if (s_input[i] == "violet")    c_input[i] = '7';
        else if (s_input[i] == "grey")        c_input[i] = '8';
        else if (s_input[i] == "white")        c_input[i] = '9';
    }
    cout << string(c_input, 2) + string(c_input[2] - '0', '0') << endl;
    
    return 0;
}
