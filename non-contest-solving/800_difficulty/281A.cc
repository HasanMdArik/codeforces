#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str[0] >= 97 && str[0] <= 122)
    {
        char firstLetter = str[0] - 32;
        cout << firstLetter;
        for (int i = 1; i < str.length(); i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
    else
    {
        cout << str << endl;
    }

    return 0;
}