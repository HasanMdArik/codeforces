#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int isHard;
    for (int i = 0; i < n; i++)
    {
        cin >> isHard;
        if (isHard)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY\n";

    return 0;
}