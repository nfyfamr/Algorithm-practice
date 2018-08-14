#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string str;
    int count;
    
    cin >> str;
    count = 0;
    
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        if ((*it == 'c' && *(it + 1) == '=')
            || (*it == 'c' && *(it + 1) == '-')
            || (*it == 'd' && *(it + 1) == '-')
            || (*it == 'l' && *(it + 1) == 'j')
            || (*it == 'n' && *(it + 1) == 'j')
            || (*it == 's' && *(it + 1) == '=')
            || (*it == 'z' && *(it + 1) == '=')
            )
        {
            ++it;
        }
        else if ((*it == 'd' && *(it + 1) == 'z' && *(it + 2) == '='))
        {
            ++it;++it;
        }
        ++count;
    }
    
    cout << count << endl;
    
    return 0;
}
