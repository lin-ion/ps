#include <iostream>
#include <string>

using namespace std;

char number_to_alpha(int n)
{
    if (n < 10)
    {
        return '0' + n;
    }
    else
    {
        return 'A' - 10 + n;
    }
}

void solve(int N, int B)
{
    string result{};

    int power = 1;

    while (N > 0)
    {
        power *= B;
        int remainder = N % B;
        N = N / B;
        result.push_back(number_to_alpha(remainder));
    }
    reverse(result.begin(), result.end());
    cout << result << '\n';
}

int main()
{
    int N;
    int B;

    cin >> N >> B;

    solve(N, B);

    return 0;
}
