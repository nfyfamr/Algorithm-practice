#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> cards(n);
    iota(cards.begin(), cards.end(), 1);

    auto current = cards.begin();
    int last = *current;
    current = cards.erase(current);

    while (!cards.empty())
    {
        if (current + 1 == cards.end()) current = cards.begin();
        else current += 1;

    	last = *current;
        current = cards.erase(current);
        if (current == cards.end()) current = cards.begin();
    }
    cout << last;
}
