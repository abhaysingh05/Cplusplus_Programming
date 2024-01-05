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
    
    int64_t n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int64_t> v(26,0);
    for (int i = 0; i < n; ++i)
    {
    	v[s.at(i) - 'a']++;
    }
    int64_t oc = 0;
    int64_t ec = 0;
    for (int64_t i = 0; i < 26; ++i)
    {
    	(v[i]&1)?oc++:ec++;
    }
    if(oc > 1 && k < oc - 1)
    {
    	cout << "NO\n";
    	return;
    }
    cout << "YES\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}