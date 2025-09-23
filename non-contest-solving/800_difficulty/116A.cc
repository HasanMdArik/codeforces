#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int capacity = 0;
    int passengers = 0;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        passengers -= a;
        passengers += b;
        capacity = max(capacity, passengers);
    }

    cout << capacity << endl;

    return 0;
}