#include <array>
#include <iostream>

using namespace std;

int main()
{
    array<array<bool, 100>, 100> m{};
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        size_t a;
        size_t b;
        cin >> a >> b;
        for (size_t x = a; x < a + 10; x++)
        {
            for (size_t y = b; y < b + 10; y++)
            {
                m[x][y] = true;
            }
        }
    }

    int cnt = 0;
    for (size_t x = 0; x < 100; x++)
    {
        for (size_t y = 0; y < 100; y++)
        {
            cnt += m[x][y];
        }
    }

    cout << cnt << '\n';

    return 0;
}
