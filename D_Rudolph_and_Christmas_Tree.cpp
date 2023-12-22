#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

void Solution()
{
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> heights;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        heights.push_back(x);
    }
    double big_area = 0.5 * d * h;
    double area = n * big_area;
    for (int i = n - 2; i >= 0; i--)
    {
        if ((heights[i] + h) - heights[i + 1] > 0)
        {
            area -= (((heights[i] + h) - heights[i + 1]) * 0.5 * d * ((heights[i] + h) - heights[i + 1]) * (1.0 / h));
        }
    }
    cout << setprecision(7) << fixed << area << endl;
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