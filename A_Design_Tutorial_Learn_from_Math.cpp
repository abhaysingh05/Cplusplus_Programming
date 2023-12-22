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
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << 9 << ' ' << n - 9 << endl;
    }
    else
    {
        cout << 4 << ' ' << n - 4 << endl;
    }

    return 0;
}