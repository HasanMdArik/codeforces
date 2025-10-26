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
    string s;
    cin >> s;
    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cur = 1;
        else
            cur++;
        ans = max(ans, cur);
    }
    cout << ans + 1 << endl;
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