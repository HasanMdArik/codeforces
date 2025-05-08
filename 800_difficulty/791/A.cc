#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b)
    {
        years++;
        a *= 3;
        b *= 2;
    }

    cout << years << endl;

    return 0;
}