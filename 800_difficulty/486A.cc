#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long n1, n2, Sn1, Sn2;

    n1 = n / 2 + n % 2;
    n2 = n / 2;

    Sn1 = n1 * n1;
    Sn2 = n2 * (n2 + 1);

    cout << (Sn2 - Sn1) << endl;

    return 0;
}