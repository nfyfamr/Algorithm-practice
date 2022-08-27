#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <deque>
#include <queue>
#include <algorithm>

using namespace std;

vector<pair<char, char>> stable_matching(int&,
                                         deque<char>&,
                                         map<char,queue<char>>&,
                                         map<char,queue<char>>&,
                                         map<char,char[27]>&);

int main(int argc, const char * argv[])
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;

    cin >> T;

    while (T-- != 0)
    {
        int n;
        string tmp;
        map<char, queue<char>> M;
        map<char, queue<char>> W;
        map<char, char[27]> inverse_W;
        deque<char> free_man;

        cin >> n;
        getline(cin, tmp);
        getline(cin, tmp);

        for (int i=0; i<n; ++i)
        {
            char m, tmp;
            cin >> m;
            free_man.push_back(m);

            cin >> tmp;

            for (int j=0; j<n; ++j)
            {
                char w;
                cin >> w;
                M[m].push(w);
            }
        }

        for (int i=0; i<n; ++i)
        {
            char w, tmp;
            cin >> w;

            cin >> tmp;

            for (int j=0; j<n; ++j)
            {
                char m;
                cin >> m;
                W[w].push(m);
                inverse_W[w][m-'a'] = j;
            }
        }

        auto matches = stable_matching(n, free_man, M, W, inverse_W);

        sort(matches.begin(), matches.end(), [](auto p1, auto p2) { return p1.first < p2.first; });
        for (auto it=matches.cbegin(); it!=matches.cend(); ++it)
        {
            cout << it->first << " " << it->second << endl;
        }

        if (T != 0)
        {
            cout << "\n";
        }
    }

    return 0;
}

vector<pair<char, char>> stable_matching(int& n,
                                         deque<char>& free_man,
                                         map<char,queue<char>>& M,
                                         map<char,queue<char>>& W,
                                         map<char,char[27]>& inverse_W)
{
    vector<pair<char, char>> matches;
    char w_engaged['a'] = {};

    // free man and not proposed to every women
    while (free_man.size() != 0)
    {
        auto m = free_man.front();
        free_man.pop_front();

        // first woman on m's list to whom m has not yet proposed
        auto w = M[m].front();
        M[m].pop();

        // w is free
        if (w_engaged[w] == 0)
        {
            // assign m and w to be engaged
            w_engaged[w] = m;
        }
        // w prefer m to her fiance m'
        else if (inverse_W[w][m-'a'] < inverse_W[w][w_engaged[w]-'a'])
        {
            // assign m and w to be engaged and m' is to be free
            free_man.push_front(w_engaged[w]);
            w_engaged[w] = m;
        }
        else {
            // w rejects m
            free_man.push_front(m);
        }
    }

    for (auto it=W.cbegin(); it!=W.cend(); ++it)
    {
        matches.push_back(make_pair(w_engaged[it->first], it->first));
    }

    return matches;
}
