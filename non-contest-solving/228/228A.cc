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
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    auto hash = mii();
    hash[s1]++;
    hash[s2]++;
    hash[s3]++;
    hash[s4]++;

    int res = 0;
    for (auto i = hash.begin(); i != hash.end(); i++)
    {
        if (i->second > 1)
            res += i->second - 1;
    }
    cout << res;
    return 0;
}