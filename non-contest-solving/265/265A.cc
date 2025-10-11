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
    string c;
    cin >> s >> c;

    int pos = 0;
    for (int i = 0; i < c.length(); i++)
    {
        if (s[pos] == c[i])
        {
            pos++;
        }
    }

    cout << pos + 1;

    return 0;
}