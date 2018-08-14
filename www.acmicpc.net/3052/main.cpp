#include <iostream>
#include <bitset>
#include <unistd.h>
#include <sys/mman.h>

using namespace std;

bitset<42> bs;

int main(int argc, char **argv)
{
    char *buf = (char *)mmap(NULL, 10010, PROT_READ, MAP_PRIVATE, 0, 0);
    
    int i, cnt = 0, num = 0, mod = 0;
    for (i = 0; cnt < 10; ++i)
    {
        if (buf[i] > 40)
            num = 10 * num + (buf[i] & 0x0f);
        else
        {
            bs.set(num % 42);
            ++cnt;
        }
    }
    
    cout << bs.count() << endl;
    
    return 0;
}
