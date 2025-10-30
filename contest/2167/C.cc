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

    vi vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    bool isAllOdd = true, isAllEven = true;
    for (int i = 0; i < n; i++)
    {

        if (vec[i] % 2)
        {
            isAllEven = false;
        }
        else
        {
            isAllOdd = false;
        }
    }

    if (isAllEven || isAllOdd)
    {
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    else
    {
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
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