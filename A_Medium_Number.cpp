#include <bits/stdc++.h>
#define endl '\n'
#define n n
#pragma GCC optimize("Ofast,no-stack-protector,fast-math",3)
#define all(x) x.begin(),x.end()
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(all(v));
    cout << v[1] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
    {
        Solution();
    }
    return 0;
}