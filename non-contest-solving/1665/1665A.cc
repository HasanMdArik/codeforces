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
    mii count;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        count[vec[i]]++;
    }

    int maxCount = 0, maxCountElem;
    for (auto &count_elem : count)
    {
        if (count_elem.second > maxCount)
        {
            maxCount = count_elem.second;
            maxCountElem = count_elem.first;
        }
    }

    int reqSwaps = vec.size() - maxCount;
    int currentSwapCap = maxCount;
    int ops = 0;
    while (reqSwaps > 0)
    {
        ops++;

        if (reqSwaps > currentSwapCap)
        {
            ops += currentSwapCap;
            reqSwaps -= currentSwapCap;
        }
        else
        {
            ops += reqSwaps;
            reqSwaps = 0;
        }

        currentSwapCap *= 2;
    }

    cout << ops << endl;
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