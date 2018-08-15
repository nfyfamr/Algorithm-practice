#include <cstdio>
#include <list>
#include <iterator>

int main (int argc, char** argv)
{
	int N;
	int j;
	int count;
	std::list<int> list;

	scanf("%d", &N);
	for (int i=0; i<N; ++i) 
	{
		scanf("%d", &j);
		list.push_back(j);
	}

	for (int i=0; i<N; ++i)
	{
		count = 0;
		if (i%2 == 0)
		{
			auto it = list.begin();
			while (*it != i/2+1)
			{
				++it;
				++count;
			}
			list.erase(it);
		}
		else
		{
			auto it = list.rbegin();
			while (*it != N-i/2)
			{
				++it;
				++count;
			}
			auto b = it.base();
			--b;
			list.erase(b);
		}
		printf("%d\n", count);
	}

	return 0;
}
		
