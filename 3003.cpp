#include <iostream>
#include <array>

using namespace std;

int main()
{
    // KQBNRP
    array<int, 6> black = {1, 1, 2, 2, 2, 8};

    array<int, 6> white = {};

    for (int i = 0; i < 6; i++)
    {
        cin >> white[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << black[i] - white[i] << ' ';
    }
    cout << black[5] - white[5] << '\n';

    return 0;
}