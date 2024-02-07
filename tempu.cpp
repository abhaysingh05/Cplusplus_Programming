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
const int mod = 1e9 + 7;
void run_case(int64_t &tttt) 
{
    // cout << "#Case " << tttt << ": ";
    
    int64_t n;
    cin >> n;
    double phi = (1LL+sqrt(5))/2;
    int64_t ans = (pow(phi,n)-pow((-(phi)),-n))/(sqrt(5));
    cout << ans%mod << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}