#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int count;
    bool ctx;
    string str;
    
    ctx = true;
    std::getline(cin, str);
    
    count = std::count_if(str.begin(), str.end(), [&ctx](char c) -> bool {
        if (c == ' ')
        {
            ctx = true;
        }
        else if (ctx)
        {
            ctx = false;
            return true;
        }
        
        return false;
    });
    cout << count << endl;
    
    return 0;
}
