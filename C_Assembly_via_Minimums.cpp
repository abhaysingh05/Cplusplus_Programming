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
    int n;
    cin >> n;
    int size = (n * (n - 1)) / 2;
    vector<int> B(size), ans;
    for (int i = 0; i < size; i++)
        cin >> B[i];
    sort(all(B));
    ans.push_back(B[size - 1]);
    int k = n;
    for (int i = 0; i < size; i += k)
    {
        ans.push_back(B[i]);
        k--;
    }
    for (auto e : ans)
        cout << e << ' ';
    cout << endl;
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