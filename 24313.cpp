#include <iostream>

using namespace std;

int main()
{
    int a1; // can be negative
    int a0;
    int c;
    int n0;

    cin >> a1 >> a0 >> c >> n0;

    if (a1 * n0 + a0 <= c * n0)
    {
        if (a1 <= 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            if (a1 > c)
            {
                // if n -> inf
                cout << 0 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }
        }
    }
    else
    {
        cout << 0 << '\n';
    }

    return 0;
}
