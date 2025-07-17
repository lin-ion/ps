#include <iostream>

using namespace std;

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int x;
    int y;
    int w;
    int h;

    cin >> x >> y >> w >> h;

    cout << min(min(x, w - x), min(y, h - y)) << '\n';

    return 0;
}
