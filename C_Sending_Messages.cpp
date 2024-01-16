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
    
    int64_t n,f,a,b;
    cin >> n >> f >> a >> b;
    vector<int64_t> m(n);
    for(auto &e : m) cin >> e;
    bool ans = true;
	int64_t val = f;
    for (int64_t i = 0; i < n; ++i)
    {
    	if(i == 0)
    	{
    		if((m[i] - 0)*a > (b))
    		{
    			val -= b;
    		}
    		else
    		{
    			val -= (m[i]-0)*a;
    		}
    	}
	    else
	    {
	    	if((m[i] - m[i-1])*a > (b))
    		{
    			val -= b;
    		}
    		else
    		{
    			val -= (m[i]-m[i-1])*a;
    		}
	    }
	    // cout << val << ' ';
	    if(val <= 0) 
    	{
    		// cout << m[i] << "```";
    		ans = false;
    		break;
    	}
    }
    cout << (ans?"YES\n":"NO\n");

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}			