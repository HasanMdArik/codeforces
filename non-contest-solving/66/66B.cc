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

    int n;
    cin >> n;

    auto arr = vi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n <= 2)
        cout << n;
    else
    {
        int startOfMaxIdx = -1;
        int maxIrri = 0;
        for (int i = 0; i < n; i++)
        {
            int irri = 1;
            // Go backwards as much as possible;
            int lastHeight = arr[i], pos = i - 1;
            while (pos >= 0 && arr[pos] <= lastHeight)
            {
                irri++;
                lastHeight = arr[pos];
                pos--;
            }
            // Go forwards as much as possible;
            lastHeight = arr[i], pos = i + 1;
            while (pos < n && arr[pos] <= lastHeight)
            {
                irri++;
                lastHeight = arr[pos];
                pos++;
            }
            maxIrri = max(irri, maxIrri);
        }

        cout << maxIrri;
    }

    return 0;
}