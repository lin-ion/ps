#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (size_t i = 0; i < T; i++)
    {
        string s;
        cin >> s;

        cout << s.at(0) << s.at(s.size() - 1) << '\n';
    }

    return 0;
}