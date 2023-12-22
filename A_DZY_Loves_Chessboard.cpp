#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int n, m;
    cin >> n >> m;
    char ch[2];
    ch[0] = 'B';
    ch[1] = 'W';
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s.at(j) == '.')
                s.at(j) = ch[(i + j) % 2];
        }
        cout << s << endl;
    }
    return 0;
}