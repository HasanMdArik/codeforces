#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0, p;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sum += p;
    }

    float per = float(sum) / n;
    cout << per << endl;

    return 0;
}