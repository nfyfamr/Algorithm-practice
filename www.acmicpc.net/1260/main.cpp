#include <cstdio>
#include <vector>
#include <bitset>
#include <string>
#include <stack>
#include <queue>
#include <sstream>

using namespace std;

string DFS(vector<bitset<1001>> g, int startVertex, int numOfVertex);
string BFS(vector<bitset<1001>> g, int startVertex, int numOfVertex);

int main(int argc, char** argv)
{
    int N, M, V;
    vector<bitset<1001>> graph(1001, bitset<1001>());
    
    scanf("%d %d %d", &N, &M, &V);
    for (int i = 0; i < M; ++i)
    {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        graph[v1][v2] = graph[v2][v1] = true;
    }
    
    printf("%s\n", DFS(graph, V, N).c_str());
    printf("%s\n", BFS(graph, V, N).c_str());
    
    return 0;
}


string DFS(vector<bitset<1001>> g, int startVertex, int numOfVertex)
{
    stringstream str;
    stack<int> st;
    
    st.push(startVertex);
    g[startVertex].reset();
    str << startVertex << " ";
    while (!st.empty())
    {
        int current = st.top();
        for (int i = 1; i <= numOfVertex; ++i)
        {
            if (g[i][current])
            {
                st.push(i);
                g[i].reset();
                str << i << " ";
                break;
            }
            if (i == numOfVertex)
            {
                st.pop();
            };
        }
    }
    
    return str.str();
}

string BFS(vector<bitset<1001>> g, int startVertex, int numOfVertex)
{
    stringstream str;
    queue<int> q;
    
    str << startVertex << " ";
    q.push(startVertex);
    g[startVertex].reset();
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        for (int i = 1; i <= numOfVertex; ++i)
        {
            if (g[i][current])
            {
                str << i << " ";
                q.push(i);
                g[i].reset();
            }
        }
    }
    
    return str.str();
}
