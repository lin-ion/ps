#include <iostream>

using namespace std;

int main()
{
    int max_v = 0;
    int max_i = 0;
    int max_j = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int n;
            cin >> n;
            if (n > max_v)
            {
                max_v = n;
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << max_v << '\n' << max_i + 1 << ' ' << max_j + 1 << '\n';

    return 0;
}
