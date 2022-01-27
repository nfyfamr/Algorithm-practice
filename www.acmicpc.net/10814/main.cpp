#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Member
{
public:
    int age;
    string name;

    Member(int a, string& n): age(a), name(n) {}
};

bool operator< (const Member& lhs, const Member& rhs)
{
    return lhs.age < rhs.age;
}

int main(int argc, char** argv)
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    vector<Member> v;

    cin >> N;

    int age;
    string name;
    while (N--)
    {
        cin >> age >> name;
        v.push_back({age, name});
    }

    stable_sort(v.begin(), v.end());

    for (const Member& m : v)
    {
        cout << m.age << " " << m.name << '\n';
    }

    return 0;
}
