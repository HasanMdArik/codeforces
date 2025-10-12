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

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int xy = x & y, yz = y & z, zx = z & x;

        if (xy == yz && yz == zx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}