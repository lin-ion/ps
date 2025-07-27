#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    array<array<char, 5>, 15> a;
    array<size_t, 15> idx{};
    for (size_t i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        for (size_t j = 0; j < s.size(); j++)
        {
            a[j][idx[j]] = s[j];
            idx[j] += 1;
        }
    }

    for (size_t i = 0; i < 15; i++)
    {
        for (size_t j = 0; j < idx[i]; j++)
        {
            cout << a[i][j];
        }
    }
    cout << '\n';

    return 0;
}
