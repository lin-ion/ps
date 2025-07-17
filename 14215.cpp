#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);

    cout << a + b + min(c, (a + b - 1));

    return 0;
}
