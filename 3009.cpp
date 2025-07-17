#include <array>
#include <iostream>

using namespace std;

int alone(int a, int b, int c)
{
    if (a == b)
        return c;
    else if (a == c)
        return b;
    else
        return a;
}

int main()
{
    array<int, 6> p;
    for (auto&& i : p)
    {
        cin >> i;
    }

    cout << alone(p[0], p[2], p[4]) << ' ';
    cout << alone(p[1], p[3], p[5]) << '\n';
}
