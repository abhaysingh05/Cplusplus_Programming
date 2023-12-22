#include <bits/stdc++.h>
#define endl '\n'
#define n n
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<char, int> v;
    string s;
    cin >> v['1'] >> v['2'] >> v['3'] >> v['4'] >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans += v[s.at(i)];
    cout << ans << endl;
    return 0;
}