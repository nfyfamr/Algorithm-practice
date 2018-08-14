#include <iostream>

int main (int argc, char **argv) {
	int p[6] = {1, 1, 2, 2, 2, 8};
	int c;

	for (int i=0; i<6; ++i)
	{
		std::cin >> c;
		std::cout << p[i]-c << ' ';
	}
	std::cout << '\n';

	return 0;
}
