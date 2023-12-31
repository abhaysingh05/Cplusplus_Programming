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
    vector<int64_t> A(n);
    for(auto &e: A) cin >> e;
    sort(begin(A), end(A));
    int64_t l = 0;
    int64_t r = n-1;
    int64_t sum = 0;
    int64_t ans = 0;
    while(l<r)
    {
    	if(sum + A[l] < A[r])
    		sum += A[l++];
    	else
    	{
    		ans += sum;
    		A[l] = sum + A[l] - A[r];
    		ans += A[r] - sum;
    		r--;
    		ans++;
    		sum = 0;
    	}
    }
    sum+= A[l];
    // cout << sum << " " << A[l] << ' ' << A[r] << endl;
    if(sum == 1)
    {
    	ans++;
    }
    else if (sum&1)
    {
    	ans += sum/2 + 2;
    }
    else if(sum!=0 && !(sum&1))
    {
    	ans += sum/2 + 1;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}
