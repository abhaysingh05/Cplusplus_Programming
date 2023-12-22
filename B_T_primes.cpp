#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e6 + 10;
int main()
{

    ll n;
    cin >> n;
    ll x;
    vector<bool> Primes(N, true);
    Primes[0] = Primes[1] = false;
    for (ll i = 2; i <= (int)1e6; i++)
    {
        for (ll j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                Primes[i] = 0;
                break;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        ll sqr = sqrt(x);
        if (x < 4)
        {
            cout << "NO\n";
        }
        else if (sqr * sqr == x)
        {
            if (Primes[sqr])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}