#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (b == a)
    {
        cout << 0 << endl;
        return;
    }

    int bsize = log2(b) + 1, asize = log2(a) + 1;
    if (bsize > asize)
    {
        cout << -1 << endl;
        return;
    }

    vi nums;
    for (int i = 0; i < 31; i++)
    {
        int bbit = b & 1, abit = a & 1;

        if (bbit != abit)
        {
            int ans = 1;
            ans <<= i;
            nums.push_back(ans);
        }

        b >>= 1, a >>= 1;
    }

    cout << nums.size() << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
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