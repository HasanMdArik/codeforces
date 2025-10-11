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
    string s;
    cin >> s;

    long long sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += (s[i] - '0');
    }

    int count = (s.length() >= 2 ? 1 : 0);
    while (sum >= 10)
    {
        int newSum = 0;
        while (sum > 0)
        {
            newSum += sum % 10;
            sum /= 10;
        }
        sum = newSum;
        count++;
    }

    cout << count;

    return 0;
}