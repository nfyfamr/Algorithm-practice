#include <cstdio>
#include <vector>
#include <iterator>

int main (int argc, char** argv)
{
	int N;
	int j;
	int count;
	std::vector<int> v;

	v.reserve(100000);

	scanf("%d", &N);
	for (int i=0; i<N; ++i) 
	{
		scanf("%d", &j);
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
		printf("%d\n", count);
	}

	return 0;
}
		
