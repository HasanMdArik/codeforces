#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int width = 0, a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
            width += 2;
        else
            ++width;
    }

    cout << width << endl;

    return 0;
}