#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;

    char temp;
    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (q[j] == 'G' && q[(j - 1)] == 'B')
            {
                temp = q[(j - 1)];
                q[(j - 1)] = q[j];
                q[(j)] = temp;
                j++;
            }
        }
    }

    cout << q << endl;
    return 0;
}