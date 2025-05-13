#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string num;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        int n = num.length();
        bool met_positive = false;
        int cnt_zero = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (num[i] != '0')
                met_positive = true;
            else if (met_positive)
                cnt_zero++;
        }

        cout << n - (cnt_zero + 1) << endl;
    }

    return 0;
}