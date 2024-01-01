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

int64_t n,P,l,t;
int64_t tasks_unlocked;

bool isSatisfy(int64_t x)
{
	return ((min(tasks_unlocked*t,2*x*t) + (x * l)) >= P);
}

void run_case() 
{
    cin >> n >> P >> l >> t;
    tasks_unlocked = (n+6)/7;
	int64_t lo = 0;
	int64_t hi = n;
	int64_t mid;
	// F F F F F T T T T
	while(hi-lo>1)
	{
		mid = (lo+hi)>>1;
		if (isSatisfy(mid))
		{
			hi = mid;
		}
		else
		{
			lo = mid+1;
		}
	}
	if(isSatisfy(lo))
	{
		cout << n - lo << "\n";
	}
	else
	{
		cout << n - hi << "\n";
	}

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}