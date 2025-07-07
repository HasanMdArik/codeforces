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

        set<pair<int, int>> vulK = set<pair<int, int>>();
        vulK.insert(pair<int, int>(xk + a, yk + b));
        vulK.insert(pair<int, int>(xk + a, yk - b));
        vulK.insert(pair<int, int>(xk - a, yk + b));
        vulK.insert(pair<int, int>(xk - a, yk - b));
        vulK.insert(pair<int, int>(xk + b, yk + a));
        vulK.insert(pair<int, int>(xk + b, yk - a));
        vulK.insert(pair<int, int>(xk - b, yk + a));
        vulK.insert(pair<int, int>(xk - b, yk - a));

        set<pair<int, int>> vulQ = set<pair<int, int>>();
        vulQ.insert(pair<int, int>(xq + a, yq + b));
        vulQ.insert(pair<int, int>(xq + a, yq - b));
        vulQ.insert(pair<int, int>(xq - a, yq + b));
        vulQ.insert(pair<int, int>(xq - a, yq - b));
        vulQ.insert(pair<int, int>(xq + b, yq + a));
        vulQ.insert(pair<int, int>(xq + b, yq - a));
        vulQ.insert(pair<int, int>(xq - b, yq + a));
        vulQ.insert(pair<int, int>(xq - b, yq - a));

        int res = 0;
        for (auto x : vulK)
        {
            if (vulQ.find(x) != vulQ.end())
                res++;
        }

        cout << res << endl;
    }

    return 0;
}