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
    string s,f;
    cin >> s >> f;
    int64_t  count1 = 0;
    int64_t  count_1 = 0;
    for (int64_t i = 0; i < n; ++i)
    {
    	if((int)(f.at(i) - s.at(i))>0) count1++;
    	else if((int)(f.at(i) - s.at(i))<0) count_1++;
    }
    int64_t mn = min(count1,count_1);
    cout << mn + abs(count1-count_1) << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}