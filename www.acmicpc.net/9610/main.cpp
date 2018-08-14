#include <iostream>

int main(int argc, char** argv)
{
	int n;
	int Q[5] = {0, };
	int x, y;

	std::cin >> n;
	while (n-- > 0)
	{
		std::cin >> x >> y;
		if (x*y == 0)
		{
			++Q[0];
		}
		else
		{
			x > 0 ? (y > 0 ? ++Q[1] : ++Q[4]) : (y > 0 ? ++Q[2] : ++Q[3]);
		}
	}

	std::cout << "Q1: " << Q[1] << '\n';
	std::cout << "Q2: " << Q[2] << '\n';
	std::cout << "Q3: " << Q[3] << '\n';
	std::cout << "Q4: " << Q[4] << '\n';
	std::cout << "AXIS: " << Q[0] << '\n';

	return 0;
}
