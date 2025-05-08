#include <iostream>
using namespace std;

int main()
{
    long long num;
    cin >> num;

    int luckyNumbers = 0;
    int digit;
    while (num != 0)
    {
        digit = num % 10;
        if (digit == 4 || digit == 7)
        {
            ++luckyNumbers;
        }
        num /= 10;
    }

    if (luckyNumbers == 4 || luckyNumbers == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}