#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int C;

    cin >> A >> B >> C;

    if (A + B + C != 180)
    {
        cout << "Error" << '\n';
    }
    else
    {
        if (A == B && B == C)
        {
            cout << "Equilateral" << '\n';
        }
        else
        {
            if (A == B || B == C || A == C)
            {
                cout << "Isosceles";
            }
            else
            {
                cout << "Scalene";
            }
        }
    }

    return 0;
}
