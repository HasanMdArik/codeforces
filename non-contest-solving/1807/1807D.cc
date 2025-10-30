#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void solve()
{
    int n, q;
    cin >> n >> q;

    vi sum(n + 1, 0);
    int num;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum[i] = sum[i - 1] + num;
    }

    int l, r, k;
    while (q--)
    {
        cin >> l >> r >> k;
        num = sum[l - 1] + k * (r - l + 1) + sum[n] - sum[r];
        if (num % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
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