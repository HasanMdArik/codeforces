#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void solve()
{
    int n, k;

    cin >> n >> k;

    string s;
    char ch;
    vi oneIdxs;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        if (ch == '1')
            oneIdxs.push_back(i);

        s.push_back(ch);
    }

    k--;
    if (oneIdxs.size() > 0)
    {
        int res = 0;
        for (int i = oneIdxs.size() - 1; i >= 0; i--)
        {
            if (i != 0)
            {
                int prevOneIdx = oneIdxs[i - 1];
                if (oneIdxs[i] - prevOneIdx > k)
                {
                    res++;
                }
            }
            else
            {
                // if (oneIdxs[i] < k)
                res++;
            }
        }
        cout << res << endl;
    }
    else
    {
        cout << 0 << endl;
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