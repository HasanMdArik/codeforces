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

    auto arr = vi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;

    int sScore = 0, dScore = 0, score;
    bool isSPlaying = true;
    while (left <= right)
    {
        if (arr[left] > arr[right])
        {
            score = arr[left];
            left++;
        }
        else
        {
            score = arr[right];
            right--;
        }

        if (isSPlaying)
        {
            sScore += score;
        }
        else
        {
            dScore += score;
        }

        isSPlaying = !isSPlaying;
    }

    cout << sScore << " " << dScore;

    return 0;
}