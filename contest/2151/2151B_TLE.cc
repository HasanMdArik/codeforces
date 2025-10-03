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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        int idx;
        auto isBlack = map<int, char>();
        for (int i = 0; i < m; i++)
        {
            cin >> idx;
            isBlack[idx] = 1;
        }

        int startIdx = 1;

        for (int i = 1; i <= n; i++)
        {
            int currIdx = 1;
            auto lastMapIt = isBlack.begin();

            char cmd;

            for (int j = 0; j < i; j++)
            {
                cmd = s[j];

                if (s[j] == 'A')
                {
                    currIdx++;
                }
                else
                {
                    // Check without loop first
                    if (lastMapIt->first - currIdx > 1)
                    {
                        currIdx += 1;
                    }
                    else
                    {
                        // find the next white
                        auto it = ++lastMapIt;
                        lastMapIt--;
                        bool gotWhite = false;
                        for (; it != isBlack.end(); it++)
                        {
                            if (it->first - lastMapIt->first > 1)
                            {
                                currIdx = lastMapIt->first + 1;
                                gotWhite = true;
                                lastMapIt = it;
                                break;
                            }
                            else
                            {
                                lastMapIt = it;
                            }
                        }
                        if (!gotWhite)
                            if (lastMapIt->first + 1 == currIdx)
                                currIdx++;
                            else
                                currIdx = lastMapIt->first + 1;
                    }
                }
            }
            isBlack[currIdx] = 1;
        }

        cout << isBlack.size() << endl;
        for (auto i = isBlack.begin(); i != isBlack.end(); i++)
        {
            cout << i->first << " ";
        }
        cout << endl;
    }
    return 0;
}