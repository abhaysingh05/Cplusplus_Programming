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
    
    int64_t n,k;
    cin >> n >> k;
    int64_t ans = 1;
    for (int i = 0; i < n; ++i)
    {
    	int64_t x;
    	cin >> x;
    	ans *= x;
    }
    int64_t temp;
    if(2023%ans)
    {
    	cout << "NO\n";
    	return;
    }
    temp = 2023/ans;
    cout << "YES\n";
    cout << temp << ' ';
    for (int64_t i = 1; i < k; ++i)
    {
    	cout << 1 << ' ';
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