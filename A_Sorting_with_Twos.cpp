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
    vector<int64_t> A(n+1);
    for (int64_t i = 1; i <= n; ++i)
    {
    	cin >> A[i];
    }
    for (int64_t k = 0; (1<<k) <= n; ++k)
    {
        int64_t t = (1<<k);
        for (int64_t i = 1; i <= (1<<k); i++)
        {
            if(A[t]>A[t+1])
            {
                for (int64_t j = 1; j <= t; ++j)
                {
                    A[j] -= A[t] - A[t+1];
                }
            }
        }
    }
    for (int64_t i = 2; i <= n; ++i)
    {
        if (A[i]<A[i-1])
        {
            cout << "NO\n";
            return;
        }
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