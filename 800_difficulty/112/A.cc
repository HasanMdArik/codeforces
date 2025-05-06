#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    char c1, c2;
    for (int i = 0; i < s1.length(); i++)
    {
        c1 = s1[i];
        c2 = s2[i];

        // Make lower-case if in upper-case
        if (c1 >= 65 && c1 <= 90)
        {
            c1 += 32;
        }
        if (c2 >= 65 && c2 <= 90)
        {
            c2 += 32;
        }

        if (c1 < c2)
        {
            cout << -1 << endl;
            return 0;
        }
        else if (c1 > c2)
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}