#include <cmath>
#include <iostream>

using namespace std;

int solve(int a)
{
    if (a == 1)
    {
        return 0;
    }
    if (a == 2)
    {
        return 1;
    }
    if (a % 2 == 0)
    {
        return 0;
    }

    for (int i = 3; i < a; i += 2)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    for (size_t i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        sum += solve(a);
    }

    cout << sum << '\n';

    return 0;
}
