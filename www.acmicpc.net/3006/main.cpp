#include <iostream>
#include <vector>
#include <iterator>

int main (int argc, char** argv)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int N;
	int j;
	int count;
	std::vector<int> v;

	v.reserve(100000);

	std::cin >> N;
	for (int i=0; i<N; ++i) 
	{
		std::cin >> j;
		v.push_back(j);
	}

	for (int i=0; i<N; ++i)
	{
		count = 0;
		if (i%2 == 0)
		{
			auto it = v.begin();
			while (*it != i/2+1)
			{
				++it;
				++count;
			}
			v.erase(it);
		}
		else
		{
			auto it = v.rbegin();
			while (*it != N-i/2)
			{
				++it;
				++count;
			}
			v.erase(it.base()-1);
		}
		std::cout << count << '\n';
	}

	return 0;
}
		
