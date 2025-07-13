#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int i;

    cin >> s;
    cin >> i;
    cout << s.at(i - 1) << '\n';

    return 0;
}
