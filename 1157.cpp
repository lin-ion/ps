#include <iostream>
#include <array>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    array<int, 26> map{0};
    string S;
    cin >> S;
    for (auto &c : S)
    {
        map[toupper(c) - toupper('A')]++;
    }
    size_t m = 0;
    for (size_t i = 0; i < 26; i++)
    {
        if (map[m] < map[i])
        {
            m = i;
        }
    }

    char output = toupper('A') + m;
    for (size_t i = m + 1; i < 26; i++)
    {
        if (map[m] == map[i])
        {
            output = '?';
            break;
        }
    }

    cout << output;
}
