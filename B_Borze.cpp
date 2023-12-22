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
    string s, ans;
    cin >> s;
    for (int i = 0; i < s.size();)
    {
        if (s.at(i) == '.')
        {
            ans.push_back('0');
            i++;
        }
        else if (s.at(i) == '-' && s.at(i + 1) == '.')
        {
            ans.push_back('1');
            i += 2;
        }
        else
        {
            ans.push_back('2');
            i += 2;
        }
    }
    cout << ans << endl;

    return 0;
}