#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        if (word.length() <= 10)
        {
            cout << word << endl;
        }
        else
        {
            cout << word[0];
            cout << (word.length() - 2);
            cout << word[(word.length() - 1)] << endl;
        }
    }

    return 0;
}
