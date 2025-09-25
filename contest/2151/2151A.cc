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
        int n, m;
        cin >> n >> m;

        auto vec = vi(m);
        for (int i = 0; i < m; i++)
        {
            cin >> vec[i];
        }

        bool willAppearMoreThanOnce = true;
        int lastNum = vec[0], num;
        for (int i = 1; i < m; i++)
        {
            num = vec[i];
            if (num - lastNum > 1 || num - lastNum <= 0)
            {
                willAppearMoreThanOnce = false;
                break;
            }
            lastNum = num;
        }

        if (!willAppearMoreThanOnce)
            cout << 1 << endl;
        else
        {
            int lastOfM = vec[m - 1];
            cout << n - lastOfM + 1 << endl;
        }
    }
    return 0;
}