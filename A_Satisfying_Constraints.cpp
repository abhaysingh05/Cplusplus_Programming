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
    vector<int64_t> v1;
    vector<int64_t> v2;
    vector<int64_t> v3;
    for (int i = 0; i < n; ++i)
    {
    	int x,y;
    	cin >> x >> y; 
    	if(x == 1) v1.push_back(y);
    	else if(x == 2) v2.push_back(y);
    	else if(x == 3) v3.push_back(y);
    }
    int64_t p1,p2;
    p1 = *max_element(begin(v1), end(v1));
    p2 = *min_element(begin(v2), end(v2));
    int64_t ans = p2 - p1 +1;
    for(auto &e: v3)
    {
    	if((e >= p1) && (e <= p2))
    	{
    		ans--;
    	}
    } 
    cout << max(ans,(int64_t)0) << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}			