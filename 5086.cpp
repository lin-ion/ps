#include <iostream>

using namespace std;

void solve(int A, int B)
{
    if ((B / A) * A == B)
    {
        cout << "factor" << '\n';
    }
    else if ((A / B) * B == A)
    {
        cout << "multiple" << '\n';
    }
    else
    {
        cout << "neither" << '\n';
    }
}

int main()
{
    int A;
    int B;
    while (true)
    {
        cin >> A >> B;
        if (A == 0 && B == 0)
            break;
        solve(A, B);
    }

    return 0;
}
