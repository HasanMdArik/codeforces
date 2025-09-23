#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
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

        int arr[n], pos[n + 1], p;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            arr[i] = p;
            pos[p] = i;
        }

        bool res = true;
        for (int i = 1; i < n; i++)
        {
            int posI = pos[i];

            bool gotSingleDistance = false;
            for (int j = i + 1; j <= n; j++)
            {

                if (abs(pos[j] - pos[i]) == 1)
                {
                    gotSingleDistance = true;
                    break;
                }
            }
            if (!gotSingleDistance)
            {
                res = false;
                break;
            }
        }

        if (res)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}