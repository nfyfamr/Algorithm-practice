#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int count;
    string str;
    
    count = 0;
    std::getline(cin, str);
    
    for (auto it = str.begin(); it+1 != str.end(); ++it)
    {
        if (*it == ' ' && *(it + 1) != ' ')
        {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}
