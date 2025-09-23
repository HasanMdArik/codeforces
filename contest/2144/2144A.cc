#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int subArraySum(int arr[], int start, int end)
{
    int res = 0;
    for (int i = start; i <= end; i++)
    {
        res += arr[i];
    }

    return res;
}

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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int s1, s2, s3;
        bool gotAns = false;
        for (int l = 0; l < n - 2; l++)
        {
            for (int r = n - 2; r > l; r--)
            {

                s1 = subArraySum(arr, 0, l) % 3;
                s2 = subArraySum(arr, l + 1, r) % 3;
                s3 = subArraySum(arr, r + 1, n - 1) % 3;

                if (s1 == s2 && s2 == s3)
                {
                    cout << l + 1 << " " << r + 1 << endl;
                    gotAns = true;
                    break;
                }
                else if (s1 != s2 && s2 != s3 && s3 != s1)
                {
                    cout << l + 1 << " " << r + 1 << endl;
                    gotAns = true;
                    break;
                }
            }
            if (gotAns)
                break;
        }

        if (!gotAns)
            cout << "0 0\n";
    }
    return 0;
}