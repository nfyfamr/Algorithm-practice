#include <iostream>

using namespace std;

bool check_dnum(int);

int main (int argc, char** argv)
{
    int Nth_dnum;
    int count = 0;

    cin >> Nth_dnum;

    int i = 666;
    for (; count<Nth_dnum; ++i) {
        if (check_dnum(i) == true) ++count;
    }

    cout << i - 1 << endl;

    return 0;
}

bool check_dnum(int i) {
    while (i > 100) {
        if (i%1000 == 666) return true;
        else i /= 10;
    }
    return false;
}
