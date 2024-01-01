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
    
    int64_t m,n;
    cin >> n >> m;
    vector<int64_t> A(n);
    vector<int64_t> B(m);
    for(auto &e : A) cin >> e;
    for(auto &e : B) cin >> e;
    int64_t mxa = *max_element(begin(A), end(A));
	int64_t mna = *min_element(begin(A), end(A));
	int64_t mnb = *min_element(begin(B), end(B));
	int64_t ans = max(mxa,2*mna);
	cout  << ((ans >= mnb)?-1:ans)<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
        run_case();
}