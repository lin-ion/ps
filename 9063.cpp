#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int min_x = numeric_limits<int>::max();
    int max_x = numeric_limits<int>::min();
    int min_y = numeric_limits<int>::max();
    int max_y = numeric_limits<int>::min();

    int N;
    cin >> N;

    for (size_t i = 0; i < N; i++)
    {
        int x;
        int y;
        cin >> x >> y;

        max_x = max(max_x, x);
        min_x = min(min_x, x);

        max_y = max(max_y, y);
        min_y = min(min_y, y);
    }

    cout << (max_x - min_x) * (max_y - min_y) << '\n';

    return 0;
}
