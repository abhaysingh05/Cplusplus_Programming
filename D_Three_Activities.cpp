#include <bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast,no-stack-protector,fast-math", 3)
#define all(x) x.begin(), x.end()
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
const int N = 1e5 + 10;
int n;
ll sol(vector<int> A, vector<int> B, vector<int> C)
{
    ll ans = 0;
    auto ita = max_element(all(A));
    ans += *ita;
    int k = distance(A.begin(), ita);
    B.erase(B.begin() + k);
    C.erase(C.begin() + k);
    auto itb = max_element(all(B));
    ans += *itb;
    k = distance(B.begin(), itb);
    C.erase(C.begin() + k);
    ans += *max_element(all(C));
    return ans;
}
void Solution()
{
    vector<int> A, B, C;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        B.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        C.push_back(x);
    }
    ll ans = -1;
    ans = max(sol(A, B, C), ans);
    ans = max(sol(B, C, A), ans);
    ans = max(sol(C, A, B), ans);
    ans = max(sol(A, C, B), ans);
    ans = max(sol(B, A, C), ans);
    ans = max(sol(C, B, A), ans);
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