#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
    int x, y;
    int months[11] = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30 };
    int days;
    string DAY[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    
    days = 0;
    cin >> x >> y;
    
    for (int i = 0; i < x - 1; ++i)
    {
        days += months[i];
    }
    days += y;
    cout << DAY[days%7] << endl;
    
    
    return 0;
}
