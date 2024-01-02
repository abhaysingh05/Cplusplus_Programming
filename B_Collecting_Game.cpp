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

void run_case() 
{
    
    int64_t n;
    cin >> n;
	vector<pair<int64_t,int64_t>> v(n+1);
	for (int i = 1; i <= n; ++i)
    {
    	cin >> v[i].first;
    	v[i].second = i;
    }   
    sort(v.begin(),v.end(),[&](pair<int64_t,int64_t> a,pair<int64_t,int64_t> b) { return a.first < b.first; });
    vector<int64_t> pfs(n+1);
    vector<int64_t> ans(n+1);
    for (int i = 1; i <= n; ++i)
	{
	 	pfs[i] = pfs[i-1] + v[i].first;
	}
	vector<int64_t> temp(n+1,0);
	vector<int64_t> vec(n+1,0);
 	for (int64_t j = 2; j <= n; ++j)
 	{
 		if(pfs[j] - pfs[j-1] > pfs[j-1])
 		{
 			temp[j-1] = 1;
 		}
 	}
 	temp[n] = 1;
 	int64_t k;
 	for (int i = n; i >=1; --i)
 	{
 		if(temp[i] == 1)
 		{
 			k = i;
 		}
 		vec[i] = k;
 	}
	for (int i = 1; i <= n; ++i)
	{
		int64_t dis = vec[i];
	 	ans[v[i].second] = dis - 1;
	}
	for (int64_t i = 1; i <= n; ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}