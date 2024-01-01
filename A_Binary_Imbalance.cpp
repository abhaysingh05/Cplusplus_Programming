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
    string s;
    cin >> s;
    bool ans = false;
    int64_t count0 = INT64_C(0),count1 = INT64_C(0); 
    for (int64_t i = INT64_C(0); i < n; ++i)
    {
        (s.at(i) == '0')? count0++:count1++;
        if(count0 > count1)
        {
            cout << "YES\n";
            return;
        }
        if(i+1 < n && s.at(i)!=s.at(i+1))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}