#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n, m, k;
    cin >> n >> m >> k;
    multiset<int> Jellyfish;
    multiset<int> Gellyfish;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Jellyfish.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        Gellyfish.insert(x);
    }
    (k & 1) ? k = 1 : k = 2;
    for (int i = 1; i <= k; i++)
    {
        if (i & 1)
        {
            auto min_J = Jellyfish.begin();
            auto max_G = Gellyfish.end();
            max_G--;
            int min = *min_J;
            int max = *max_G;
            if (max > min)
            {
                Jellyfish.erase(min_J);
                Gellyfish.erase(max_G);
                Jellyfish.insert(max);
                Gellyfish.insert(min);
            }
        }
        else
        {
            auto min_G = Gellyfish.begin();
            auto max_J = Jellyfish.end();
            max_J--;
            int min = *min_G;
            int max = *max_J;
            if (max > min)
            {
                Gellyfish.erase(min_G);
                Jellyfish.erase(max_J);
                Gellyfish.insert(max);
                Jellyfish.insert(min);
            }
        }
    }
    ll ans = accumulate(all(Jellyfish), 0LL);
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}