#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    cout << mx - mn << " " << ((mx == mn) ? ((n * 1LL * (n - 1)) / 2) : (1LL * count(v.begin(), v.end(), mx) * count(v.begin(), v.end(), mn))) << endl;
    return 0;
}