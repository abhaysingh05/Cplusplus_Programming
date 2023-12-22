#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
const int N = 1e7 + 10;
vector<int> v;
int n, m;
inline bool isSatisfy(int mid)
{
    ll req = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mid)
            req += (v[i] - mid);
    }
    return req >= m;
}

int main()
{
    cin >> n >> m;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int lo = 0, hi = 1e9, mid;
    // T T T T T T F F F F - "Predicate func"
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (isSatisfy(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (lo >= m)
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }
    return 0;
}