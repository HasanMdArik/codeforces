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

    vi zeroIndices;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zeroIndices.push_back(i + 1);
        }
    }

    cout << zeroIndices.size() << endl;
    for (int i = 0; i < zeroIndices.size(); i++)
    {
        cout << zeroIndices[i] << " ";
    }
    cout << endl;
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