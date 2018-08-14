#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    int count;
    string str;
    array<bool, 27> alpha;
    
    cin >> N;
    count = N;
    while (N-- > 0)
    {
        alpha.fill(true);
        cin >> str;
        str.append("{");
        for (auto it = str.begin() + 1; it != str.end(); ++it)
        {
            if (*it != *(it - 1))
            {
                if (!alpha[*(it - 1) - 'a'])
                {
                    --count;
                    break;
                }
                alpha[*(it - 1) - 'a'] = false;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}
