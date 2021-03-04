#include <iostream>
#include <vector>

using namespace std;

vector<int> find_solution();
pair<int,int> dp[1000001];

int main(int argc, char** argv)
{
    int N;

    cin >> N;
    dp[0] = make_pair(-1, N);
    auto reversed_answer = find_solution();

    cout << reversed_answer.size() - 1 << endl;
    for (auto iter = reversed_answer.rbegin(); iter != reversed_answer.rend(); ++iter) {
        cout << *iter << " ";
    }

    return 0;
}

vector<int> find_solution() {
    int i = 0, end = 1, val = 0;
    do {
        val = dp[i].second;

        if (val % 3 == 0) {
            dp[end++] = make_pair(i, val/3);
            if (val / 3 == 1) break;
        }
        if (val % 2 == 0) {
            dp[end++] = make_pair(i, val/2);
            if (val / 2 == 1) break;
        }
        dp[end++] = make_pair(i, val-1);
        if (val == 2) break;

    } while (++i);

    vector<int> result;
    for (int j = end-1; j != -1; j = dp[j].first) {
        result.push_back(dp[j].second);
    }

    return result;
}
