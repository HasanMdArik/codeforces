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

    multiset<int> mulSet;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        mulSet.insert(num);
    }

    for (int i = 0; i <= 100; i++)
    {
        if (mulSet.find(i) == mulSet.end())
        {
            cout << i << endl;
            return;
        }
    }

    cout << 101 << endl;
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