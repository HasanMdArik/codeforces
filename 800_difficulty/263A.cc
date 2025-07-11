#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int num;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> num;
            if (num == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    cout << (abs(row - 3) + abs(col - 3)) << endl;

    return 0;
}