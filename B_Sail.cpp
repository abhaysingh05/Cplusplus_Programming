#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    char x, y;
    int cx = 0, cy = 0;
    int time = -1;
    if (ex - sx >= 0)
    {
        x = 'E';
        cx = ex - sx;
    }
    else
    {
        x = 'W';
        cx = sx - ex;
    }
    if (ey - sy >= 0)
    {
        y = 'N';
        cy = ey - sy;
    }
    else
    {
        y = 'S';
        cy = sy - ey;
    }
    for (int i = 0; i < t; i++)
    {
        if (s.at(i) == x)
            cx--;
        else if (s.at(i) == y)
            cy--;
        if (cx <= 0 && cy <= 0)
        {
            time = i + 1;
            break;
        }
    }
    cout << time << endl;
    return 0;
}