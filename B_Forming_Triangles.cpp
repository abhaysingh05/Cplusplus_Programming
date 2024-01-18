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
    
    int64_t n;
    cin >> n;
    vector<int64_t> a(n+1);
    map<int64_t,int64_t> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    if(n < 3)
    {
        cout << 0 << "\n";
        return;
    }
    int64_t ans = 0;
    sort(begin(a), end(a));
    for (int i = 1; i < n; ++i)
    {
        m[a[i]] += i - 1;
        if(a[i] == a[i+1])
        {
            ans += m[a[i]];
        }
    }
    cout << ans << "\n";
    
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}