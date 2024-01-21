#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void run_case(int64_t &tttt) 
{
    // cout << "#Case " << tttt << ": ";
    int n;
    cin >> n;
    vector<int> a(n+1);
    map<int,int> val;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    vector<int> v2(n+1);
    vector<int> v1(n+1);
    val[1] = 1;
    val[n] = -1;
    for (int i = 2; i < n; ++i)
    {
        int64_t l = abs(a[i]-a[i-1]);
        int64_t r = abs(a[i]-a[i+1]);
        if(l < r)
        {
            val[i] = -1;
        }
        else
        {
            val[i] = 1;
        }
    }
    v1[1] = 0;
    v2[n] = 0;
    for (int i = 2; i <= n; ++i)
    {
        if(val[i] == -1)
        {
            v1[i] = 1 + v1[i-1];
        }
        else
        {
            v1[i] = abs(a[i]-a[i-1]) + v1[i-1];
        }
    }
    for (int i = n-1; i >= 1; --i)
    {
        if(val[i] == 1)
        {
            v2[i] = 1 + v2[i+1];
        }
        else
        {
            v2[i] = abs(a[i]-a[i+1]) + v2[i+1];
        }
    }
    int m;
    cin >> m;
    while(m--)
    {
        int x,y;
        cin >> x >> y;
        if(x == y) cout << 0 << "\n";
        else if(y > x)
        {
            cout << v2[x] - v2[y] << "\n";
        }
        else
        {
            cout << v1[x] - v1[y] << "\n";
        }
    }
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}