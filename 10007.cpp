#include <cassert>
#include <iostream>
#include <vector>
#include <array>
#include <cmath>

struct Line
{
    int x1;
    int y1;
    int x2;
    int y2;
};

int main()
{
    size_t K, N;
    std::cin >> K >> N;

    auto L = std::vector<Line>(N);
    for (size_t i = 0; i < N; i++)
    {
        std::cin >> L[i].x1 >> L[i].y1 >> L[i].x2 >> L[i].y2;
    }

    // 각 점에 대해 겹치는 횟수를 계산하는 것은 복잡도가 N^2
    // 선분이 한 번만 맞는지도 검사 불가능.

    // 각도를 기준으로 점들을 선형으로 정렬할 수는 있으나, 같은 각도에 여러 점이 위치 가능.

    // (2,4) 와 같은 좌표는 (1,2) 로 최소화 가능. 공배수 구하기?

    // for (auto &&line : L)
    // {
    //     std::cout << std::atan(static_cast<float>(line.y1) / line.x1) << ' ';
    // }
    // std::cout << '\n';
    // for (auto &&line : L)
    // {
    //     std::cout << std::atan(static_cast<float>(line.y2) / line.x2) << ' ';
    // }

    return 0;
}