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
        int num;

        int zeros = 0, negOnes = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num == -1)
                negOnes++;
            else if (num == 0)
                zeros++;
            else
                ones++;
        }

        cout << zeros + (negOnes % 2) * 2 << endl;
    }
    return 0;
}