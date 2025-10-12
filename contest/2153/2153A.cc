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

        auto hash = mii();
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            hash[num]++;
        }

        cout << hash.size() << endl;
    }
    return 0;
}