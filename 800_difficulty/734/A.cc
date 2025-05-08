#include <iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;

    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            ++anton;
        }
        else
        {
            ++danik;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (danik > anton)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}