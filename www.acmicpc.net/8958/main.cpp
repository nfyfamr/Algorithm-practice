#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int count;
    
    count = 0;
    cin >> count;
    
    for (int i=0; i<count; ++i)
    {
        int sum;
        int count;
        string str;
        
        sum = count = 0;
        cin >> str;
        
        for_each(str.begin(), str.end(), [&sum, &count](char c) -> void {
            if (c=='O')
            {
                count++;
            }
            else
            {
                sum += count * (count + 1) / 2;
                count = 0;
            }
        });
        if (count)
        {
            sum += count * (count + 1) / 2;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
