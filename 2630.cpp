#include <cassert>
#include <iostream>
#include <array>
#include <vector>
#include <numeric>

using namespace std;

array<array<bool, 128>, 128> paper;

// width 크기의 종이를 검사
// return: <white, blue> 개수
pair<int, int> test(pair<int, int> pos, int width)
{
    const auto [y, x] = pos;
    if (width == 1)
    {
        // 0 -> {1, 0}
        // 1 -> {0, 1}
        return {!paper[y][x], paper[y][x]};
    }

    const int w = width / 2;

    auto sum = [](auto ret)
    {
        return std::accumulate(
            ret.begin(),
            ret.end(),
            std::pair{0, 0},
            [](auto acc, const auto &p)
            {
                return std::pair{
                    acc.first + p.first,
                    acc.second + p.second};
            });
    }(std::array{test({y, x}, w), test({y, x + w}, w), test({y + w, x}, w), test({y + w, x + w}, w)});

    if (sum.first == 0)
    {
        sum.second = 1; // 4 -> 1
    }
    else if (sum.second == 0)
    {
        sum.first = 1;
    }

    return sum;
}

int main()
{
    int N;
    cin >> N;

    // 0: White
    // 1: Blue

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> paper[i][j];
        }
    }

    const auto [white, blue] = test({0, 0}, N);
    cout << white << '\n'
         << blue << '\n';

    return 0;
}
