#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    ll Px, Py, Ax, Ay, Bx, By;
    cin >> Px >> Py >> Ax >> Ay >> Bx >> By;
    double PA, PB, AB, OA, OB, ans;
    OA = sqrt(Ax * Ax + Ay * Ay);
    OB = sqrt(Bx * Bx + By * By);
    AB = sqrt((Ax - Bx) * (Ax - Bx) + (Ay - By) * (Ay - By));
    PA = sqrt((Ax - Px) * (Ax - Px) + (Ay - Py) * (Ay - Py));
    PB = sqrt((Px - Bx) * (Px - Bx) + (Py - By) * (Py - By));
    ans = (min(OA, OB) == OA) ? ((min(PA, PB) == PA) ? max(OA, PA) : max(max(OA, PB), AB / 2)) : ((min(PA, PB) == PB) ? max(OB, PB) : max(max(OB, PA), AB / 2));
    cout << fixed << setprecision(10) << ans << endl;
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