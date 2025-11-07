#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<int, int> uii;
typedef long long ll;

const unsigned long long MAX_ARRAY = 1e7 + 1;
bool isNotPrime[MAX_ARRAY] = {true, true};
int primes[MAX_ARRAY];
int pc = 0;

void sieve(int n)
{
    if (n < 2)
        return;
    primes[pc++] = 2;
    for (unsigned long long d = 2 * 2; d <= n; d += 2)
    {
        isNotPrime[d] = true;
    }
    for (int i = 3; i <= n; i += 2)
    {
        if (!isNotPrime[i])
        {
            primes[pc++] = i;
            for (unsigned long long j = i * i; j <= n; j += i)
            {
                isNotPrime[j] = true;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < pc; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (gcd(primes[i], vec[j]) == 1)
            {
                cout << primes[i] << endl;
                return;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(1e7);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}