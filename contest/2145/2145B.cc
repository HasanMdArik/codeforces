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
        int n, k;
        cin >> n >> k;

        auto deck = vector<char>(n, '+');
        int top = 0, bottom = n - 1;
        char ch;

        int hashOfActions[3] = {0};
        for (int i = 0; i < k; i++)
        {
            cin >> ch;
            hashOfActions[ch - '0']++;
        }

        // Remove the top cards
        for (int i = 0; i < hashOfActions[0]; i++)
        {
            deck[top] = '-';
            top++;
        }
        // Remove the bottom cards
        for (int i = 0; i < hashOfActions[1]; i++)
        {
            deck[bottom] = '-';
            bottom--;
        }

        int remainingCards = bottom - top + 1;
        if (remainingCards > 0)
        {
            if (hashOfActions[2] >= remainingCards)
            {
                // all -
                for (int i = top; i <= bottom; i++)
                {
                    deck[i] = '-';
                }
            }
            else
            {
                for (int i = 0; i < hashOfActions[2]; i++)
                {
                    deck[top] = '?';
                    top++;
                }
                for (int i = 0; i < hashOfActions[2]; i++)
                {
                    deck[bottom] = '?';
                    bottom--;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << deck[i];
        }
        cout << endl;
    }
    return 0;
}