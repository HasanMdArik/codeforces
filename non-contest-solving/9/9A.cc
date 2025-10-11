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
    int a, b;
    cin >> a >> b;
    int maxDice = max(a, b);
    int num = 6 - maxDice + 1;
    int _gcd = gcd(num, 6);

    cout << num / _gcd << "/" << 6 / _gcd;

    return 0;
}