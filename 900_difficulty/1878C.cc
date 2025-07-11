#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

bool problemFunc(ll n, ll k, ll x)
{
    if (k * (k + 1) <= 2 * x && (n * (n + 1) - (n - k) * (n - k + 1)) >= 2 * x)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        ll n, k;
        ll x;
        cin >> n >> k;
        cin >> x;
        if (problemFunc(n, k, x))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}