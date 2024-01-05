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
    
    string s;
    cin >> s;
    s = "1" + s;
    int64_t ans = 0;
    for (int i = 1; i <= 4; ++i)
    {
        if(s.at(i) != '0' && s.at(i-1)!='0')
            ans += abs(s.at(i) - s.at(i-1));
        else if(s.at(i) == '0' && s.at(i-1) != '0')
            ans += 10 - (s.at(i-1) - '0');
        else if(s.at(i) != '0' && s.at(i-1) == '0')
            ans += abs(s.at(i) - '0' - 10);
        else
            ans += 0;
    }
    cout << ans + 4 << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    cin >> tests;

    for(int64_t i = 1; i <= tests; i++)
        run_case(i);
}