#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int a, b;
        cin >> a >> b;

        int xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;

        vector<pair<int, int>> vulK = vector<pair<int, int>>(8);
        vulK[0] = pair<int, int>(xk + a, yk + b);
        vulK[1] = pair<int, int>(xk + a, yk - b);
        vulK[2] = pair<int, int>(xk - a, yk + b);
        vulK[3] = pair<int, int>(xk - a, yk - b);
        vulK[4] = pair<int, int>(xk + b, yk + a);
        vulK[5] = pair<int, int>(xk + b, yk - a);
        vulK[6] = pair<int, int>(xk - b, yk + a);
        vulK[7] = pair<int, int>(xk - b, yk - a);
        sort(vulK.begin(), vulK.end());
        auto vulK_withoutDuplicate = vector<pair<int, int>>();
        pair<int, int> pair_i;
        for (int i = 0; i < 8; i++)
        {
            pair_i = vulK[i];
            for (int j = i + 1; j < 8; j++)
            {
                if (pair_i == vulK[j])
                {
                    i++;
                }
                else
                {
                    break;
                }
            }

            vulK_withoutDuplicate.push_back(pair_i);
        }

        vector<pair<int, int>>
            vulQ = vector<pair<int, int>>(8);
        vulQ[0] = pair<int, int>(xq + a, yq + b);
        vulQ[1] = pair<int, int>(xq + a, yq - b);
        vulQ[2] = pair<int, int>(xq - a, yq + b);
        vulQ[3] = pair<int, int>(xq - a, yq - b);
        vulQ[4] = pair<int, int>(xq + b, yq + a);
        vulQ[5] = pair<int, int>(xq + b, yq - a);
        vulQ[6] = pair<int, int>(xq - b, yq + a);
        vulQ[7] = pair<int, int>(xq - b, yq - a);
        sort(vulQ.begin(), vulQ.end());
        auto vulQ_withoutDuplicate = vector<pair<int, int>>();
        for (int i = 0; i < 8; i++)
        {
            pair_i = vulQ[i];
            for (int j = i + 1; j < 8; j++)
            {
                if (pair_i == vulQ[j])
                {
                    i++;
                }
                else
                {
                    break;
                }
            }

            vulQ_withoutDuplicate.push_back(pair_i);
        }

        int res = 0;
        for (int i = 0; i < vulK_withoutDuplicate.size(); i++)
        {
            for (int j = 0; j < vulQ_withoutDuplicate.size(); j++)
            {
                if (vulK_withoutDuplicate[i] == vulQ_withoutDuplicate[j])
                {
                    res++;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}