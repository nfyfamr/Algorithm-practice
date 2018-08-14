#include <iostream>

int main (int argc, char** argv)
{
	int N;
	int i = 1, j = 1;

	std::cin >> N;
	while (N-- > 0)
	{
		N%2 == 0 ? ++i : ++j;
	}
	std::cout << i*j << '\n';

	return 0;
}
