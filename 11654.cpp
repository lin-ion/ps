#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = static_cast<int>(s.at(0));

    cout << i << '\n';
    return 0;
}
