#include <iostream>
using namespace std;
int main()
{
    int H, W, N, M;
    std::cin >> H >> W >> N >> M;
    int c = (H + N) / (N + 1); // ceil(H/N+1)
    int r = (W + M) / (M + 1);
    std::cout << c * r << endl;
}