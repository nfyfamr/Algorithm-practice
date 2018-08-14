#include <iostream>

int main(int argc, char *argv) {
    double a, b;
    std::cin >> a >> b;
    std::cout.precision(20);
    std::cout << a / b;
    return 0;
}
