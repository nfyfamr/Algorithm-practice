#include <iostream>
#include <vector>

using namespace std;

vector<int> find_solution(pair<int,int>*, int);

int main(int argc, char** argv)
{
    int N;
    pair<int,int> dp[1000001];

    fill(&dp[0], &dp[0] + 100001, std::make_pair(-1, -1));

    cin >> N;

    // pair(length, from)
    dp[0] = make_pair(0, 1);
    dp[N] = make_pair(0, N);
    auto reversed_answer = find_solution(dp, N);

    cout << reversed_answer.size() - 1 << endl;
    for (auto iter = reversed_answer.rbegin(); iter != reversed_answer.rend(); ++iter) {
        cout << *iter << " ";
    }

    return 0;
}

vector<int> find_solution(pair<int,int>* dp, int N) {
    for (int i=N; i>1; --i) {
        int len = dp[i].first + 1;
        int to;

        if (i % 3 == 0) {
            to = i / 3;
            if (dp[to].first == -1 || len < dp[to].first) {
                dp[to] = make_pair(len, i);
            }
        }
        if (i % 2 == 0) {
            to = i / 2;
            if (dp[to].first == -1 || len < dp[to].first) {
                dp[to] = make_pair(len, i);
            }
        }
        to = i - 1;
        if (dp[to].first == -1 || len < dp[to].first) {
            dp[to] = make_pair(len, i);
        }
    }

    vector<int> result;
    for (int i=0; i!=N; ) {
        i = dp[i].second;
        result.push_back(i);
    }

    return result;
}
