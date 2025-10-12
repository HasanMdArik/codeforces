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

        auto hash = mii();
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            hash[num]++;
        }

        if (n > 3)
        {
            long long perimeter = 0;

            auto sideGive = vector<pair<long long, int>>();
            for (auto i = hash.begin(); i != hash.end(); i++)
            {
                if (i->second % 2 == 0)
                {
                    perimeter += (i->first * i->second);
                }
                else
                {
                    sideGive.push_back({i->first * i->second, i->first});
                }
            }

            if (perimeter > 0 && sideGive.size() > 0)
            {
                sort(sideGive.begin(), sideGive.end());
                int acceptedSide;
                for (int i = sideGive.size() - 1; i >= 0; i--)
                {
                    if (sideGive[i].second < perimeter)
                    {
                        perimeter += sideGive[i].first;
                        acceptedSide = sideGive[i].second;
                        break;
                    }
                }

                for (int i = sideGive.size() - 1; i >= 0; i--)
                {
                    if (sideGive[i].second < perimeter && sideGive[i].second != acceptedSide)
                    {
                        perimeter += sideGive[i].first;
                        break;
                    }
                }
            }

            cout << perimeter << endl;
        }
        else
        {
            long long perimeter = 0, oddSideSize;
            // Add all sides that occur even number of times
            for (auto i = hash.rbegin(); i != hash.rend(); i++)
            {
                if (i->second % 2 == 0)
                {
                    perimeter += (i->first * i->second);
                }
                else
                {
                    oddSideSize = i->first;
                }
            }

            if (oddSideSize < perimeter)
            {
                perimeter += oddSideSize;
                cout << perimeter << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}