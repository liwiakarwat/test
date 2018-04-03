#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double t;
    cin >> t;
    double m=2, h=1.2, v=10, g=10;
    double n;
    n = (m*(sqrt(2*g*h))/t)*2;
    cout.precision(3);
    cout << fixed << n;
    return 0;
}
