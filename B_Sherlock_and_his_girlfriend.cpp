#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e3 + 2;
int main()
{
    int n, ans = 1, c;
    cin >> n;
    vector<int> v(n + 2, 1);
    vector<bool> isPrime(n + 2, 1);
    for (int i = 2; i < n + 2; i++)
    {
        if (isPrime[i])
        {
            v[i] = 1;
            for (int j = 2 * i; j < n + 2; j += i)
            {
                isPrime[j] = false;
                v[j] = 2;
            }
        }
        // for (int i = 2; i <= n + 1; i++)
        // {
        //     cout << v[i] << ' ';
        // }
        // cout << endl;
    }
    cout << *max_element(v.begin() + 2, v.end()) << endl;
    for (int i = 2; i <= n + 1; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}