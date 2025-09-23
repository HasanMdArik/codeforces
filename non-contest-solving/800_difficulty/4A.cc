#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int w;
    cin >> w;

    if (w % 2 == 0 && w >= 4)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
