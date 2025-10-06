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

    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    string s;
    cin >> s;

    long long cals = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cals += a[(s[i] - '1')];
    }

    cout << cals;

    return 0;
}