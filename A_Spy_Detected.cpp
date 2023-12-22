#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> v1(101, 0);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        v1[v[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[v[i]] == 1)
        {
            cout << i + 1 << endl;  
            return;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    size_t t;
    cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}