#include <iostream>

using namespace std;

void solve(int N, int K)
{
    if (N == 1)
    {
        cout << 1 << '\n';
        return;
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cnt += 1;
            if (cnt == K)
            {
                cout << i << '\n';
                return;
            }
        }
    }

    cout << 0 << '\n';
}

int main()
{
    int N;
    int K;
    cin >> N >> K;

    solve(N, K);

    return 0;
}
