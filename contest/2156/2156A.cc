#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        int res = (n - 2 + 1) / 2;
        cout << res << endl;
    }
    else
    {
        int res = (n - 2) / 2;
        cout << res << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}