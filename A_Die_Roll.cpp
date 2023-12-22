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

    int Y, W;
    cin >> Y >> W;
    int num = 7 - max(Y, W);
    cout << num / __gcd(num, 6) << "/" << 6 / __gcd(num, 6) << endl;
    return 0;
}