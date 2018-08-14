#include <iostream>

void PrintStars (int);

int main (int argc, char** argv)
{
	int N;

	std::cin >> N;
	PrintStars(N);

	return 0;
}

void PrintStars (int N)
{
	char c[101][201];
	int i = 0;

	memset(c, ' ', sizeof(c));
	for (; i<N; ++i)
	{
		for (int j=0; j<=i; ++j)
		{
			c[i][j] = c[i][2*N-1-j] = '*';
		}
		c[i][2*N] = '\0';

		std::cout << c[i] << '\n';
	}

	--i;
	while (i-- > 0)
	{
		std::cout << c[i] << '\n';
	}
		
	return;
}
