#include <array>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

double conv_grade(string grade)
{
    constexpr array<tuple<string_view, double>, 9> m{
        tuple{"A+", 4.5},
        tuple{"A0", 4.0},
        tuple{"B+", 3.5},
        tuple{"B0", 3.0},
        tuple{"C+", 2.5},
        tuple{"C0", 2.0},
        tuple{"D+", 1.5},
        tuple{"D0", 1.0},
        tuple{ "F", 0.0},
    };

    for (auto&& i : m)
    {
        if (get<0>(i) == grade)
        {
            return get<1>(i);
        }
    }
    return 0;
}

int main()
{
    double sum1 = 0.0;
    double sum2 = 0.0;
    for (size_t i = 0; i < 20; i++)
    {
        string trash;
        double credit;
        string grade;

        cin >> trash >> credit >> grade;

        if (grade == "P")
            continue;
        sum1 += credit * conv_grade(grade);
        sum2 += credit;
    }

    cout << fixed << setprecision(6) << sum1 / sum2 << '\n';

    return 0;
}
