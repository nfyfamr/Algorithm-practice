#include<iostream>
#include<unordered_map>

using namespace std;

unordered_map<long int, long int> hash_map;
long int P, Q, X, Y;

long int sequence_at(long int i)
{
	if (i <= 0) return 1;
    if (hash_map.find(i) == hash_map.end())
        hash_map[i] = sequence_at(i/P-X) + sequence_at(i/Q-Y);
    return hash_map[i];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long int N;
    cin >> N >> P >> Q >> X >> Y;

    cout << sequence_at(N) << endl;
}
