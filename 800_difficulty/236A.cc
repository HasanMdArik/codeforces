#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool chars[26];
    for (int i = 0; i < 26; i++)
    {
        chars[i] = false;
    }

    for (int i = 0; i < str.length(); i++)
    {
        chars[(str[i] - 97)] = true;
    }

    int dChars = 0;
    for (int i = 0; i < 26; i++)
    {
        if (chars[i])
        {
            dChars++;
        }
    }

    if (dChars % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}