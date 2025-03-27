#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    while (!(a == 0 && b == 0 && c == 0))
    {
        if (a > b)
        {
            std::swap(a, b);
        }
        if (b > c)
        {
            std::swap(b, c);
        }
        // c: longest side

        if (a == b && b == c)
        {
            std::cout << "Equilateral" << endl;
        }
        else if (a + b <= c)
        {
            std::cout << "Invalid" << endl;
        }
        else if (a == b || b == c || a == c)
        {
            std::cout << "Isosceles" << endl;
        }
        else
        {
            std::cout << "Scalene" << endl;
        }

        std::cin >> a >> b >> c;
    }
}