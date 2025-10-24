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

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxVal = 0, prevMaxVal = 0;
    long long op1 = 0, op2 = 0;
    for (int i = 0; i < n; i++)
    {
        prevMaxVal = maxVal;
        maxVal = max(maxVal, a[i]);
        if (i == 0)
        {
            if (a[i] >= a[i + 1])
            {
                if (a[i + 1] < maxVal)
                {
                    a[i + 1] = maxVal;
                    if (a[i] >= a[i + 1])
                    {
                        op2 += (a[i] - a[i + 1] + 1);
                        a[i] -= op2;
                        // cout << "Idx: " << i + 1 << " op2Count: " << op2 << endl;
                    }
                }
                else
                {
                    op2 += (a[i] - a[i + 1] + 1);
                    a[i] -= op2;
                    maxVal -= op2;
                    // cout << "Idx: " << i + 1 << " op2Count: " << op2 << endl;
                }
            }
        }
        else if (i == n - 1)
        {
            if (i % 2 == 0)
            {
                // odd
                if (a[i] >= a[i - 1])
                {
                    // int op2Count = (a[i - 1] - a[i] + 1);
                    op2 += (a[i] - a[i - 1] + 1);
                    // cout << "Idx: " << i + 1 << " op2Count: " << (a[i] - a[i - 1] + 1) << endl;
                }
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                // odd
                if (a[i] >= a[i - 1] || a[i] >= a[i + 1])
                {
                    // Check if maxing works
                    if (maxVal > a[i])
                    {
                        a[i + 1] = maxVal;
                    }
                    else
                    {
                        if (a[i] >= a[i + 1] && a[i + 1] < maxVal)
                        {
                            a[i + 1] = maxVal;
                        }
                        int dec = max((a[i] - a[i - 1] + 1), (a[i] - a[i + 1] + 1));
                        op2 += dec;
                        if (a[i] == maxVal)
                        {
                            maxVal = max(prevMaxVal, a[i] - dec);
                        }
                        a[i] -= dec;
                        // cout << "Idx: " << i + 1 << " op2Count: " << dec << endl;
                    }
                }
            }
            else
            {
                // even
                if (a[i] <= a[i - 1] || a[i] <= a[i + 1])
                {
                    if (maxVal > a[i])
                        a[i] = maxVal;
                }
            }
        }
    }

    cout << op2 << endl;
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