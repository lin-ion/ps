#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    size_t midpoint = s.size() / 2;
    // level -> lev vel
    // baekjoon -> baek joon

    bool isPalindrome = true;
    for (size_t i = 0; i < midpoint; i++)
    {
        size_t j = s.size() - 1 - i;
        if (s[i] != s[j])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << 1 << ' ';
    }
    else
    {
        cout << 0 << ' ';
    }

    return 0;
}
