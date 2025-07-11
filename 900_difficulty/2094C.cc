#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<bool> numChecker = vector<bool>(2 * n, false);
        int p[2 * n];

        int g;
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cin >> g;

                if (row == 0)
                {
                    p[row + col + 1] = g;
                    numChecker[g - 1] = true;
                }
                else if (col == (n - 1))
                {
                    p[row + col + 1] = g;
                    numChecker[g - 1] = true;
                }
            }
        }

        // Check for the missing number
        for (int i = 0; i < 2 * n; i++)
        {
            if (!numChecker[i])
            {
                cout << (i + 1) << " ";
                break;
            }
        }

        // Print
        for (int i = 1; i < 2 * n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}