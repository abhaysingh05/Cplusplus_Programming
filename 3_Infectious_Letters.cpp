#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> vb;
    int ans = 0;
    if (s.at(0) != 'b')
        vb.push_back(-1);
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'b')
        {
            vb.push_back(i);
        }
    }
    vb.push_back(s.size());
    int j;
    for (int i = 0; i < vb.size() - 1; i++)
    {
        if (find(s.begin() + (vb.at(i)), s.begin() + (vb.at(i + 1)), 'a') != (s.begin() + (vb.at(i + 1))))
        {
            ans += (vb.at(i + 1) - vb.at(i) - 1);
        }
    }
    cout << ans << endl;
    return 0;
}