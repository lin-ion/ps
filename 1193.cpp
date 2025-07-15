#include <iostream>

using namespace std;

void solve(int X)
{
    int sum = 1;
    int step = 1;
    while (sum <= X)
    {
        sum += step;
        step += 1;
    }
    step -= 1;
    sum -= step;

    if (step % 2 == 0)
    {
        // ↙️
        cout << 1 + (X - sum) << '/' << step - (X - sum) << '\n';
    }
    else
    {
        // ↗️
        cout << step - (X - sum) << '/' << 1 + (X - sum) << '\n';
    }
}

int main()
{
    int X;
    cin >> X;

    solve(X);

    return 0;
}
