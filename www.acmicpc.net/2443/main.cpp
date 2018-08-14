#include <iostream>

int main (int argc, char** argv)
{
	int N;

	std::cin >> N;
	for (int i=N; i>0; --i)
	{
		for (int j=0; j<N+i-1; ++j)
		{
			std::cout << (j < N-i ? ' ' : '*');
		}
		std::cout << '\n';
	}

	return 0;
}
