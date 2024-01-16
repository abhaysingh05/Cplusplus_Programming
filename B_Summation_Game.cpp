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

vector<int64_t> v;
vector<int> pfs;

int64_t sum(int64_t l,int64_t r)
{
	return pfs[r]-pfs[l]+v[l];
}

void run_case(int64_t &tttt) 
{
    // cout << "#Case " << tttt << ": ";
    
    int64_t n,k,x,ans = INT64_MIN;
    cin >> n >> k >> x;
    v.resize(n+10);
    pfs.resize(n+10);
    for (int i = 1; i <= n; ++i)
    {
    	cin >> v[i];
    }
    sort(begin(v)+1, begin(v)+n+1);
    for (int i = 1; i <= n; ++i)
    {
    	pfs[i] = pfs[i-1] + v[i];
    }
    for (int i = 0; i <= k; ++i)
    {
    	if(x+i > n)
    	{
    		x--;
    	}
    	ans = max(ans,sum(1,n-i-x)-sum(n-i-x+1,n-i));
    }
    cout << ans << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
    {
    	v.clear();
    	pfs.clear();
        run_case(i);
    }
}