#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int policeOfficers = 0, untreatedCrimes = 0, num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == -1)
        {
            if (policeOfficers > 0)
            {
                policeOfficers--;
            }
            else
            {
                untreatedCrimes++;
            }
        }
        else
        {
            policeOfficers += num;
        }
    }

    cout << untreatedCrimes;

    return 0;
}