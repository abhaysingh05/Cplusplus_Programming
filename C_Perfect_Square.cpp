#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    int n, ans = 0;
    cin >> n;
    string s;
    char Normal[n][n];
    char Clockwise[n][n];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            Normal[i][j] = s.at(j);
            Clockwise[j][n - i - 1] = s.at(j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Normal[i][j] < Clockwise[i][j])
            {
                Clockwise[j][n - i - 1] = Clockwise[i][j];
                ans += Clockwise[i][j] - Normal[i][j];
                Normal[i][j] = Clockwise[i][j];
            }
            if (Normal[n - i - 1][n - j - 1] < Clockwise[n - i - 1][n - j - 1])
            {
                Clockwise[n - j - 1][i] = Clockwise[n - i - 1][n - j - 1];
                ans += Clockwise[n - i - 1][n - j - 1] - Normal[n - i - 1][n - j - 1];
                Normal[n - i - 1][n - j - 1] = Clockwise[n - i - 1][n - j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Normal[i][j] < Clockwise[i][j])
            {
                Clockwise[j][n - i - 1] = Clockwise[i][j];
                ans += Clockwise[i][j] - Normal[i][j];
                Normal[i][j] = Clockwise[i][j];
            }
            if (Normal[n - i - 1][n - j - 1] < Clockwise[n - i - 1][n - j - 1])
            {
                Clockwise[n - j - 1][i] = Clockwise[n - i - 1][n - j - 1];
                ans += Clockwise[n - i - 1][n - j - 1] - Normal[n - i - 1][n - j - 1];
                Normal[n - i - 1][n - j - 1] = Clockwise[n - i - 1][n - j - 1];
            }
        }
    }
    cout << ans << endl;
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