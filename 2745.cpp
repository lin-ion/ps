#include <iostream>
#include <string>

using namespace std;

int alpha_to_number(char c)
{
    if (c < 'A')
    {
        static_assert('0' - '0' == 0);
        static_assert('9' - '0' == 9);
        return c - '0';
    }
    else
    {
        static_assert('A' - 'A' + 10 == 10);
        static_assert('Z' - 'A' + 10 == 35);
        return c - 'A' + 10;
    }
    return c;
}

long long solve(string s, int B)
{
    long long result = 0;

    int power = 1;
    for (size_t i = 0; i < s.size(); i++)
    {
        result += alpha_to_number(s.at(s.size() - 1 - i)) * power;
        power *= B;
    }

    return result;
}

int main()
{
    string s;
    int B;

    cin >> s >> B;

    cout << solve(s, B) << '\n';

    return 0;
}
