#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int n, q, x;
    cin >> n;
    int A[n + 1], P[n + 1];
    A[0] = 0;
    P[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    for (int i = 1; i <= n; i++)
        P[i] = P[i - 1] + A[i];
    int hsh[P[n] + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = P[i] + 1; j <= P[i + 1]; j++)
            hsh[j] = i + 1;
    }
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << hsh[x] << endl;
    }
    return 0;
}