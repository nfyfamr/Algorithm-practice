#include <iostream>

int main (int argc, char** argv)
{
	int N;

	std::cin >> N;
	for (int i=0; i<N; ++i)
	{
		for (int j=0; j<N+i; ++j)
		{
			std::cout << (j < N-i-1 ? ' ' : '*');
		}
		std::cout << '\n';
	}

	return 0;
}
