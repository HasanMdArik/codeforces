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
    int maxNum = 0, num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        maxNum = max(maxNum, num);
    }

    cout << maxNum;

    return 0;
}