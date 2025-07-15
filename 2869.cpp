#include <iostream>

using namespace std;

void solve(int A, int B, int V)
{
    int night = (V - B) / (A - B);
    int after_height = night * (A - B);   // night번째 밤 이후의 height
    int before_height = after_height + B; // night번째 밤 이전의 height
    if (before_height == V)
    {
        cout << night; // night번째 밤의 직전에 height 도달
    }
    else
    {
        cout << night + 1; // night번째 밤 이후의 낮에 height 도달
    }
}

int main()
{
    int A;
    int B;
    int V;

    cin >> A >> B >> V;

    solve(A, B, V);

    return 0;
}
