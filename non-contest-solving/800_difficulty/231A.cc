#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int solvableProbs = 0;
    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        int sum = petya + vasya + tonya;
        if (sum >= 2)
        {
            ++solvableProbs;
        }
    }
    cout << solvableProbs << endl;

    return 0;
}
