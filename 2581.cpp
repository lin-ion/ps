#include <iostream>
#include <vector>

using namespace std;

void solve(int M, int N)
{
    vector<bool> is_prime(10001, true);
    is_prime[1] = false;

    for (int i = 2; i <= 100; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    int minimum = 0;
    int sum = 0;
    for (int i = M; i <= N; i++)
    {
        if (is_prime[i])
        {
            if (minimum == 0)
            {
                minimum = i;
            }
            sum += i;
        }
    }

    if (minimum != 0)
    {
        cout << sum << '\n';
        cout << minimum << '\n';
    }
    else
    {
        cout << "-1" << '\n';
    }
}

int main()
{
    int M;
    int N;
    cin >> M >> N;

    solve(M, N);

    return 0;
}
