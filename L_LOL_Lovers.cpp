#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> onion_cnt(n, 0), loaf_cnt(n, 0);
    for (int i = 0; i < n; i++)
        (s.at(i) == 'L') ? loaf_cnt[i]++ : onion_cnt[i]++;
    for (int i = 1; i < n; i++)
    {
        loaf_cnt[i] += loaf_cnt[i - 1];
        onion_cnt[i] += onion_cnt[i - 1];
    }
    for (int i = 0; i < n - 1; i++)
        if ((loaf_cnt[i] != (loaf_cnt[n - 1] - loaf_cnt[i])) && (onion_cnt[i] != (onion_cnt[n - 1] - onion_cnt[i])))
        {
            cout << i + 1 << endl;
            return 0;
        }
    cout << -1 << endl;
    return 0;
}