#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    int M;
    cin >> N >> M;

    vector<int> v(N * M);

    for (auto&& i : v)
    {
        cin >> i;
    }

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            int b;
            cin >> b;
            cout << v[i * M + j] + b << (j == M - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
