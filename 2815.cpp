#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int p1;
    int p2;

    char s[11];
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (strcmp("KBS1", s) == 0)
        {
            p1 = i;
        }
        else if (strcmp("KBS2", s) == 0)
        {
            p2 = i;
        }
    }

    int px = 0;
    if (p1 == 0)
    {
        cout << "1";
        px++;
    }
    else
    {
        if (p2 == 0)
        {
            if (p1 == 1)
            {
                cout << "3";
                return 0;
            }
            else
            {
                cout << "1";
                px++;
            }
        }
        else
        {
            if (p2 < p1)
            {
                p2--;
            }
        }

        for (; px < p1; px++)
        {
            cout << "3";
        }
        p1--;

        if (p1 != 0)
        {
            px--;
            cout << "2";

            for (; px > 0; px--)
            {
                cout << "4";
            }
            // px = 0;
            if (p2 < p1)
            {
                p2++;
            }
            p1 = 0;

            if (p2 == 1)
            {
                return 0;
            }
            else
            {
                cout << "1";
                px++;
            }
        }
    }

    for (; px < p2; px++)
    {
        cout << "3";
    }
    p2--;
    if (p2 != 1)
    {
        px--;
        cout << "2";
        for (; px > 1; px--)
        {
            cout << "4";
        }
    }
}
