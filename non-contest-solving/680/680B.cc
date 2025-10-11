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
    int n, a;
    cin >> n >> a;

    auto cities = vi(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cities[i];
    }

    int catchedCriminals = cities[a];
    int pos_left = a - 1, pos_right = a + 1;
    while (pos_left > 0 || pos_right <= n)
    {
        if (pos_left > 0 && pos_right <= n)
        {
            if (cities[pos_left] && cities[pos_right])
            {
                catchedCriminals += 2;
            }
        }
        else if (pos_left > 0)
        {
            if (cities[pos_left])
            {
                catchedCriminals++;
            }
        }
        else if (pos_right <= n)
        {
            if (cities[pos_right])
            {
                catchedCriminals++;
            }
        }
        pos_left--;
        pos_right++;
    }

    cout << catchedCriminals;

    return 0;
}