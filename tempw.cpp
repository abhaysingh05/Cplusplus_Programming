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
    int64_t m;
    cin >> m;
    vector<int64_t> cnt(30,0);
    set<int64_t> possible; 
    for (int64_t i = 0; i < m; ++i)
    {
        int64_t x,y;
        int64_t last_bit;
        bool val = true;
        cin >> x >> y;
        if(x==1)
        {
            if(cnt[y] != (1<<y))
            {
                cnt[y] += (1<<y);
            }  
            else
            {
                for (int64_t i = y+1; i < 30; ++i)
                {
                    if(cnt[i]!= (1<<i))
                    {
                        cnt[i] += (1<<y);
                        break;
                    }
                }
            }
        } 
        else
        {
            while(y > 0)
            {
                last_bit = y | 0;
                y >>= 1;
                if(cnt[last_bit]!=(1<<last_bit))
                {
                    val = false;
                    break;
                }
            }
            if(val) cout << "YES\n";
            else cout << "NO\n";
            val = true;
        }
    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
        run_case();
}       