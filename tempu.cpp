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
    
    int64_t h,w,xa,ya,xb,yb;
    cin >> h >> w >> xa >> ya >> xb >> yb;
    if(xb == 1 || xa == h) 
    {
    	cout << "Draw\n";
    	return;
    }
    if(xa+xb == ya+yb || xa + ya == xb + yb)
	{
		cout << "Draw\n";
		return;
	}
    if((xb - xa)&1)
    {
    	if(xa >= xb)
    	{
    		cout << "Draw\n";
    		return;
    	}
    	cout << "Alice\n";
    }
    else
    {
    	if(xa >= xb)
    	{
    		cout << "Draw\n";
    		return;
    	}
    	
    	cout << "Bob\n";
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