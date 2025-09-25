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
        int n;
        cin >> n;

        auto vec = vi(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int maxDiff = vec[1] - vec[0];
        int diff;
        for (int i = 3; i < n; i += 2)
        {
            diff = vec[i] - vec[i - 1];
            if (diff > maxDiff)
                maxDiff = diff;
        }

        cout << maxDiff << endl;
    }
    return 0;
}