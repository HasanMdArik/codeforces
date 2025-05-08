#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int uppercase = 0, lowercase = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            ++lowercase;
        }
        else
        {
            ++uppercase;
        }
    }

    if (lowercase >= uppercase)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 97 && str[i] <= 122)
            {
                cout << str[i];
            }
            else
            {
                cout << (char)(str[i] + 32);
            }
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 97 && str[i] <= 122)
            {
                cout << (char)(str[i] - 32);
            }
            else
            {
                cout << str[i];
            }
        }
        cout << endl;
    }

    return 0;
}