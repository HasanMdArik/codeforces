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

    vi vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    int pos = 0, maxCons = 0;
    while (pos < n)
    {
        int cons = 1, lastElem = vec[pos];
        for (int i = pos + 1; i < n; i++)
        {
            if (vec[i] - lastElem <= k)
            {
                cons++;
            }
            else
            {
                break;
            }
            lastElem = vec[i];
        }
        pos += cons;
        maxCons = max(cons, maxCons);
    }

    cout << (n - maxCons) << endl;
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