#include <cassert>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <ranges>

using namespace std;

int main()
{
    int N;
    int K;

    cin >> N >> K;

    vector<array<int, 4>> v(N);

    for (auto &[name, m1, m2, m3] : v)
    {
        cin >> name >> m1 >> m2 >> m3;
    }

    sort(v.begin(), v.end(), [](auto a, auto b)
         { return ranges::lexicographical_compare(b | views::drop(1), a | views::drop(1)); });

    int rank = 1;
    if (v[0][0] != K)
    {
        for (int i = 1; i < N; i++)
        {
            if (!ranges::equal(v[i] | views::drop(1), v[i - 1] | views::drop(1)))
                rank = i + 1;

            if (v[i][0] == K)
                break;
        }
    }
    cout << rank << '\n';

    return 0;
}
