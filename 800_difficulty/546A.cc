#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int borrow = w * (w + 1) / 2 * k - n;
    if (borrow < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << borrow << endl;
    }

    return 0;
}