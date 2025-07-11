#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int pickedUp = 0;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[(i - 1)] == str[i])
        {
            pickedUp++;
        }
    }

    cout << pickedUp << endl;

    return 0;
}