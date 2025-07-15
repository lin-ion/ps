#include <iostream>

using namespace std;

void solve(int N)
{
    long long side_vertices = 2;
    // y=(x+x(x-1))^2
    for (size_t i = 0; i < N; i++)
    {
        side_vertices += side_vertices - 1;
    }

    cout << side_vertices * side_vertices << '\n';
}

int main()
{
    int N;
    cin >> N;

    solve(N);

    return 0;
}
