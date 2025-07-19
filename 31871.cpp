#include <algorithm>
#include <array>
#include <iostream>
#include <ranges>

using namespace std;

array<array<int, 10>, 10> graph{};
array<int, 9> s{}; // stack
int N;

int DFS(int u, int depth)
{
    if (depth == N)
    {
        return graph[u][0]; // all discovered
    }

    int max_cost = 0;
    for (int i = 1; i <= N; i++)
    {
        if (graph[u][i] == 0)
            continue;
        if (ranges::contains(s | views::take(depth), i)) // discovered
            continue;

        if (graph[u][i] != 0)
        {
            int cost = graph[u][i];

            s[depth] = i;

            int result = DFS(i, depth + 1);

            if (result != 0)
            {
                max_cost = max(max_cost, result + cost);
            }
        }
    }

    return max_cost; // If cost is 0, there is no path
}

int main()
{
    int M;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int u;
        int v;
        int d;
        cin >> u >> v >> d;
        graph[u][v] = max(graph[u][v], d);
    }

    for (int i = 0; i <= N; i++)
    {
        graph[i][i] = 0;
    }

    int result = DFS(0, 0);

    if (result == 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << result << '\n';
    }

    return 0;
}
