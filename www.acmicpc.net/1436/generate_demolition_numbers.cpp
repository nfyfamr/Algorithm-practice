#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char** argv)
{
    ofstream output ( "cursed_numbers.csv" );

    for (int i=0; i<100000000; ++i) {
        string num_str = to_string(i);
        if (num_str.find("666") != string::npos)
            output << i << endl;
    }

    output.close();

    return 0;
}
