#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prevArr = -1, arr, groups = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr;

        if (arr != prevArr)
            ++groups;

        prevArr = arr;
    }

    cout << groups << endl;

    return 0;
}