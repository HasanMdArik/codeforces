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
    int homeHash[101] = {0}, awayHash[101] = {0};
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        homeHash[num]++;

        cin >> num;
        awayHash[num]++;
    }

    int res = 0;
    for (int i = 1; i <= 100; i++)
    {
        res += homeHash[i] * awayHash[i];
    }

    cout << res << endl;

    return 0;
}