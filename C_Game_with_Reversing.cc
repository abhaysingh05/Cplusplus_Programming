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
    string s1,s2;
    cin >> s1 >> s2;
    int64_t cnt = 0;
    int64_t cntr = 0;
    int64_t ans = 0;
    int64_t ansr = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(s1.at(i)!=s2.at(i))
    	{
    		cnt++;
    	}
    	if(s1.at(i)!=s2.at(n-i-1))
    	{
    		cntr++;
    	}
    }
    ans = cnt + (cnt - (cnt&1));
    ansr = cntr + (cntr - !(cntr&1));
    if(cntr == 0)
    {
    	ansr = 2;
    }
    cout << min(ans,ansr) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}