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
    vector<int64_t> v(n);
    for(auto &e : v) cin >> e;
    int64_t a = *min_element(v.begin(),v.end());
	int64_t b = *max_element(v.begin(),v.end());
	int64_t ca = 0,cb = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(v[i]!=a && v[i]!=b)
    	{
    		cout << "NO\n";
    		return;
    	}
    	if(v[i] == a)
    	{
    		ca++;
    	}
    	else if(v[i] == b)
    	{
    		cb++;
    	}
    }
    cout << cb << " " << ca << endl;
    if(abs(cb-ca) > 1 && a != b)
    {
    	cout << "NO\n";
    	return;
    }
    cout << "YES\n";    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}	