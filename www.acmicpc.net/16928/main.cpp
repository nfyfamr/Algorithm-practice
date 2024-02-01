#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX = 100000;
int filtered_min(int idx, vector<int> board, vector<int> excludes)
{
    int min_val = MAX;
    for (auto at = (idx < 6 ? 0 : idx - 6); at <= idx; ++at)
    {
        if (excludes[at] != 1)
            min_val = min(min_val, board[at]);
    }
    return min_val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    vector<int> ladder(101, -1);
    vector<int> snake(101, -1);
    vector<int> excludes(101, 0);
    cin >> N >> M;
    for (int i = 0, a, b; i < N; ++i)
    {
        cin >> a >> b;
        ladder[b] = a;  // ladder[to] = from
        excludes[a] = 1;
    }
    for (int i = 0, a, b; i < M; ++i)
    {
        cin >> a >> b;
        snake[a] = b;  // snake[from] = to
        excludes[a] = 1;
    }

    vector<int> board(101, MAX);
    board[0] = board[1] = 0;
    int idx = 2;
    while (idx <= 100)
    {
        int from_back = filtered_min(idx, board, excludes) + 1;
        int from_ladder = ladder[idx] != -1 ? board[ladder[idx]] : MAX;
        board[idx] = min(from_back, from_ladder);

        // when current cell is a snake
        // & the detination of it currently has larger dice count
        // then jump to it
        if (snake[idx] != -1 && board[idx] < board[snake[idx]])
        {
            board[snake[idx]] = board[idx];
            idx = snake[idx];
        }

        ++idx;
    }

    cout << board[100];
}
