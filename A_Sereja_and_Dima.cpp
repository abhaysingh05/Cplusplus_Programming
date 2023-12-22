#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

int main()
{
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    ll sereja = 0, dima = 0;
    for (int i = 0; i < n; i++)
    {
        int t = max(*(v.begin()), *(v.end() - 1));
        (t == *(v.begin())) ? v.erase(v.begin()) : v.erase(v.end() - 1);
        (!(i & 1)) ? sereja += t : dima += t;
    }
    cout << sereja << ' ' << dima << endl;
    return 0;
}