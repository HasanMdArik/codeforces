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
    int n, m;
    cin >> n >> m;

    auto vec = vector<pair<int, int>>(m);
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        vec[i] = {b, a};
    }

    sort(vec.begin(), vec.end());

    int spaceLeft = n;
    long long matches = 0;
    for (int i = vec.size() - 1; i >= 0 && spaceLeft > 0; i--)
    {
        if (vec[i].second <= spaceLeft)
        {
            matches += vec[i].first * vec[i].second;
            spaceLeft -= vec[i].second;
        }
        else
        {
            matches += vec[i].first * spaceLeft;
            spaceLeft = 0;
        }
    }

    cout << matches;

    return 0;
}