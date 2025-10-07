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

    int k, r;
    cin >> k >> r;
    int count = 1;
    int price = k;
    while (price % 10 != 0 && (price - r) % 10 != 0)
    {
        price += k;
        count++;
    }
    cout << count;

    return 0;
}