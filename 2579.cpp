#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

int optimal(std::vector<int> &P, std::vector<std::array<int, 2>> &M, int step, int state)
{
    if (step < 0)
    {
        return 0; // start point
    }

    int &record = M[step][state - 1];
    if (record != -1)
    {
        return record;
    }

    if (state == 1)
    {
        // P[step] + max( f(step-2, 1), f(step-2, 2))
        record = P[step] + std::max({optimal(P, M, step - 2, 1), optimal(P, M, step - 2, 2)});
    }
    else
    // if (state == 2)
    {
        // P[step] + f(step-1, 1)
        record = P[step] + optimal(P, M, step - 1, 1);
    }
    return record;
}

int main()
{
    size_t N;
    std::cin >> N;
    auto P = std::vector<int>(N, 0);

    for (size_t i = 0; i < N; ++i)
    {
        std::cin >> P[i];
    }

    /*
           0,  1,  2,  3,  4,  5
    P = { 10, 20, 15, 25, 10, 20 }
    fn(x) : 연속으로 n개 계단을 밟은 상태에서, x계단의 누적 점수
    fn(-1): start point = 0

    f1(5) = P[5] + max( f1(3), f2(3) )
    f2(5) = P[5] + f1(4)

    f1(4) = P[4] + max( f1(2), f2(2) )
    f2(4) = P[4] + f1(3)

    f1(3) = P[3] + max( f1(1), f2(1) )
    f2(3) = P[3] + f1(2)

    f1(2) = P[2] + max( f1(0), f2(0) )
    f2(2) = P[2] + f1(1)

    f1(1) = P[1] + max( f1(-1), f2(-1) )
    f2(1) = P[1] + f1(0)

    f1(0) = P[0] + max( f1(-2), f2(-2) )
    f2(0) = P[0] + f1(-1)
    */

    auto M = std::vector<std::array<int, 2>>(N, {-1, -1}); // record optimal points
    // f1(x): M[x][0]
    // f2(x): M[x][1]

    std::cout << std::max({optimal(P, M, N - 1, 1), optimal(P, M, N - 1, 2)}) << '\n';
    return 0;
}
