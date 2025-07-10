#include <cassert>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solve(vector<vector<int>> &graph, vector<int> &visited)
{
    int cnt = 0;

    for (int i = 0; i < graph.size(); i++)
    {
        if (visited[i] == false)
        {
            cnt += 1;

            queue<int> q;
            q.push(i);
            visited[i] = true;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                // cout << u + 1 << " ";
                for (auto &&v : graph[u])
                {
                    if (visited[v] == false)
                    {
                        q.push(v);
                        visited[v] = true;
                    }
                }
            }
            // cout << "\n";
        }
    }

    return cnt;
}

int main()
{
    int N;
    int M;

    cin >> N >> M;

    vector<vector<int>> graph(N);
    vector<int> visited(N);

    for (int i = 0; i < M; i++)
    {
        int u;
        int v;
        cin >> u >> v;

        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }

    cout << solve(graph, visited) << '\n';

    return 0;
}