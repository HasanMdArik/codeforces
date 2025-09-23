#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int a, b, n;
        cin >> a >> b >> n;

        vi tools = vi(n);
        for (int i = 0; i < n; i++)
        {
            cin >> tools[i];
        }
        sort(tools.begin(), tools.end());

        ll timePassed = b;
        for (int i = 0; i < tools.size(); i++)
        {
            if (tools[i] < a)
            {
                timePassed += tools[i];
            }
            else
            {
                timePassed += (a - 1);
            }
        }

        cout << timePassed << endl;
    }
    return 0;
}