#include <iostream>

using namespace std;

void solve(int N)
{
    int i = 2;
    while (i <= N)
    {
        if (N % i == 0)
        {
            cout << i << '\n';
            N = N / i;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int N;
    cin >> N;

    solve(N);

    return 0;
}
