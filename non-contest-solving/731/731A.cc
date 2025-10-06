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

    string s;
    cin >> s;

    int currPos = 0, cw, ccw, nextPos, rots = 0;
    for (int i = 0; i < s.length(); i++)
    {
        nextPos = s[i] - 'a';
        cw = nextPos - currPos;
        if (cw < 0)
        {
            cw += 26;
        }
        ccw = currPos + 26 - nextPos;
        if (ccw > 26)
        {
            ccw -= 26;
        }
        rots += min(cw, ccw);
        currPos = nextPos;
    }

    cout << rots;

    return 0;
}