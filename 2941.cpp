#include <iostream>
#include <array>
#include <string>

using namespace std;

int solve(string s)
{
    constexpr array<string_view, 8> characters = {
        "dz=",
        "c=",
        "c-",
        "d-",
        "lj",
        "nj",
        "s=",
        "z="};

    int cnt = 0;
    size_t i = 0;
    while (i < s.size())
    {
        string_view accept(s.data() + i, 1);
        cnt += 1;
        for (auto &&ch : characters)
        {
            size_t n = ch.size();
            if (i + n - 1 < s.size())
            {
                string_view slice(s.data() + i, n);
                if (slice == ch)
                {
                    i += n - 1;
                    break;
                }
            }
        }
        i += 1;
    }

    return cnt;
}

int main()
{
    string s;
    cin >> s;

    cout << solve(s) << '\n';

    return 0;
}
