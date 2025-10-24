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

    bool isAllZeros = true;
    int prefixXOR = 0;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        prefixXOR ^= num;
        if (num != 0)
            isAllZeros = false;
    }

    if (isAllZeros)
    {
        cout << 0 << endl;
    }
    else if (prefixXOR == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
        else
        {
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
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