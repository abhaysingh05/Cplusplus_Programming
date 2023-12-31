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
    
    int64_t n,q;
    cin >> n >> q;
    vector<int64_t> a(n);
    vector<int64_t> x(q);
    for (int64_t i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    for (int i = 0; i < q; ++i)
    {
    	cin >> x[i];
    }
    vector<int64_t> Q;
    map<int64_t,int64_t> mx;
    for (int i = 0; i < q; ++i)
    {
        if(mx[x[i]] == false)
        {
            mx[x[i]] = true;
            Q.push_back(x[i]);
        }
    }
    for(int64_t k = 0;k < Q.size();++k)
    {
	    for (int64_t i = 0; i < n; ++i)
	    {
	    	if(a[i]%(1<<Q[k]) == 0)
	    	{
	    		a[i] += (1<<(Q[k]-1));
	    	}
	    }
	}
	for(auto &e:a) cout << e << ' ';
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