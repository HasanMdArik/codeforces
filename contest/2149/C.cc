#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        auto isThere = map<int, int>();
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            isThere[num]++;
        }

        int numsThere = 0;
        for (int i = 0; i < k; i++)
        {
            if (isThere[i] != 0)
                numsThere++;
        }

        if (isThere[k] != 0)
        {
            if (isThere[k] <= k - numsThere)
            {
                cout << k - numsThere << endl;
            }
            else
            {
                cout << isThere[k] << endl;
            }
        }
        else
        {
            cout << k - numsThere << endl;
        }
    }
    return 0;
}