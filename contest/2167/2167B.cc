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
    string s,
        t;
    cin >> s >> t;

    mii used;
    for (int i = 0; i < s.length(); i++)
    {
        used[s[i]]++;
    }

    // for (auto &&i : used)
    // {
    //     printf("%c: %d\n", i.first, i.second);
    // }

    bool possible = true;
    for (int i = 0; i < t.length(); i++)
    {
        if (used[t[i]] > 0)
        {
            used[t[i]]--;
        }
        else
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}