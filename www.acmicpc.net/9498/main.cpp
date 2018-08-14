#include <iostream>

using namespace std;
#define NUM_OF_GRADES 4

int main()
{
    char grades[] = { 'D', 'C', 'B', 'A' };
    char grade = 'F';
    int score;
    
    cin >> score;
    
    for (int i = 0; i < NUM_OF_GRADES; ++i)
    {
        if (score - 10 * i >= 60)
        {
            grade = grades[i];
        }
        else
        {
            break;
        }
    }
    
    cout << grade << endl;
    
    return 0;
}
