#include <cassert>
#include <iostream>

int cycle(int n)
{
    int d10 = n / 10;
    int d1 = n % 10;
    int sum = d10 + d1;
    int sum_d1 = sum % 10;
    return d1 * 10 + sum_d1;
}

int main()
{
    int N;
    std::cin >> N;

    int count = 0;
    int num = N;
    do
    {
        num = cycle(num);
        count++;
    } while (N != num);

    std::cout << count << '\n';

    return 0;
}