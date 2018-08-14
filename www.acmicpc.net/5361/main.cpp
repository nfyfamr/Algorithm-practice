#include <iostream>

int main (int argc, char** argv)
{
    int T;
    long a, b, c, d, e;
    
    std::cin >> T;
    while (T-- > 0)
    {
        std::cin >> a >> b >> c >> d >> e;
        printf("$%.2lf\n", 350.34*a + 230.90*b + 190.55*c + 125.30*d + 180.90*e);
    }
    
    return 0;
}
