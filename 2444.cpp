#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) // 0 1 2 3 4
    {
        int space = N - i - 1;    // 4 3 2 1 0
        int asterisk = i * 2 + 1; // 1 3 5 7 9
        for (int j = 0; j < space; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < asterisk; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }

    for (int i = 0; i < N - 1; i++) // 0 1 2 3
    {
        int space = i + 1;                  // 1 2 3 4
        int asterisk = (N - 1 - i) * 2 - 1; // 7 5 3 1
        for (int j = 0; j < space; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < asterisk; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}