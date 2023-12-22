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
    vector<int> v, v_copy;
    int ele;
    int maxzloyts = 0, minzloyts = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    v_copy = v;
    for (int i = 1; i <= n; i++)
    {
        auto mx = max_element(v.begin(), v.end());
        maxzloyts += (*mx);
        (*mx)--;
    }
    for (int i = 1; i <= n; i++)
    {
        auto mn = min_element(v_copy.begin(), v_copy.end());
        minzloyts += (*mn);
        (*mn)--;
        if (*mn == 0)
            v_copy.erase(mn);
    }
    cout << maxzloyts << ' ' << minzloyts << endl;
    return 0;
}