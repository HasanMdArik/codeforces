#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        auto letterCount = vector<int>(26, 0);

        for (int i = 0; i < n; i++)
        {
            letterCount[s[i] - 'a']++;
        }

        int oddOccurences = 0;
        for (int i = 0; i < 26; i++)
        {
            if (letterCount[i] % 2 != 0)
                oddOccurences++;
        }

        if (oddOccurences - k <= 1)
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