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
        vi hashArray = vi(n + 1, 0);
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            hashArray[num]++;
        }

        int maxSubsequenceLength = 0;
        for (int i = 0; i <= n; i++)
        {
            int minElems = hashArray[i];
            int suitableNums = 0;
            for (int j = 0; j <= n; j++)
            {
                if (minElems <= hashArray[j])
                {
                    suitableNums++;
                }
            }
            maxSubsequenceLength = max(maxSubsequenceLength, suitableNums * minElems);
        }
        cout << maxSubsequenceLength << endl;
    }
    return 0;
}