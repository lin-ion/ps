#include <array>
#include <iostream>

using namespace std;

void solve(int C)
{
    constexpr array<int, 4> coins = {25, 10, 05, 01};

    for (size_t i = 0; i < coins.size(); i++)
    {
        cout << C / coins.at(i);
        C = C % coins.at(i);

        if (i == coins.size() - 1)
        {
            break;
        }
        cout << ' ';
    }
    cout << '\n';
}

int main()
{
    int T;
    cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        int C;
        cin >> C;
        solve(C);
    }

    return 0;
}
