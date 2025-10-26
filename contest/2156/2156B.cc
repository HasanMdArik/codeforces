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

    string s;
    cin >> s;

    bool isAllA = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            isAllA = false;
            break;
        }
    }

    while (q--)
    {
        int a;
        cin >> a;

        int res = 0;

        if (isAllA)
        {
            res = a;
        }
        else
        {
            while (a > 0)
            {
                for (int i = 0; i < n && a > 0; i++)
                {
                    if (s[i] == 'A')
                    {
                        a--;
                    }
                    else
                    {
                        a /= 2;
                    }
                    res++;
                }
            }
        }

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