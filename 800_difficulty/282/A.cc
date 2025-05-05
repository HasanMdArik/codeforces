#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string statement;
        cin >> statement;

        if (statement == "++X" || statement == "X++")
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x;

    return 0;
}
