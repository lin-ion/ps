#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>

int optimal(std::vector<int> &P, int step, int state);

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

    std::cout << std::max({optimal(P, N - 1, 1), optimal(P, N - 1, 2)}) << '\n';
    return 0;
}

int optimal(std::vector<int> &P, int step, int state)
{
    if (step < 0)
    {
        return 0; // start point
    }

    if (state == 1)
    {
        // P[step] + max( f(step-2, 1), f(step-2, 2))
        return P[step] + std::max({optimal(P, step - 2, 1), optimal(P, step - 2, 2)});
    }
    else
    // if (state == 2)
    {
        // P[step] + f(step-1, 1)
        return P[step] + optimal(P, step - 1, 1);
    }
}
