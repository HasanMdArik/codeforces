#include <iostream>
using namespace std;

int main()
{
    string sum;
    cin >> sum;

    int ones = 0, twos = 0, threes = 0;
    char digit;
    for (int i = 0; i < sum.length(); i += 2)
    {
        switch (sum[i])
        {
        case '1':
            ++ones;
            break;
        case '2':
            ++twos;
            break;

        case '3':
            ++threes;
            break;
        }
    }

    int digits = ones + twos + threes;
    for (int i = 0; i < digits; i++)
    {
        if (i != 0)
            cout << "+";

        if (ones > 0)
        {
            cout << 1;
            --ones;
        }
        else if (twos > 0)
        {
            cout << 2;
            --twos;
        }
        else
        {
            cout << 3;
            --threes;
        }
    }
    cout << endl;

    return 0;
}