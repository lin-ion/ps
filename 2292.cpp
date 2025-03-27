#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin >> N;
    // N(r)=3r^2+3r+1
    cout << static_cast<int>(ceil((-3+sqrt(12.*N-3))/6))+1;
}