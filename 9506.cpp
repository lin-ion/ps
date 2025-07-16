#include <iostream>
#include <print>
#include <span>
#include <vector>

using namespace std;

void solve(int N)
{
    int sum = 0;
    vector<int> v;
    for (int i = 1; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            sum += i;
            v.push_back(i);
        }
    }

    if (sum != N)
    {
        println("{0} is NOT perfect.", N);
        return;
    }

    print("{0} = 1", N);
    for (auto&& i : span(v.begin() + 1, v.end() - 1))
    {
        print(" + {0}", i);
    }

    println(" + {0}", v.back());
}

int main()
{
    int N;

    while (true)
    {
        cin >> N;
        if (N == -1)
        {
            break;
        }

        solve(N);
    }

    return 0;
}
