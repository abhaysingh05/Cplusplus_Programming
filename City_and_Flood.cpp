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
const int N = 1e5 + 10;

vector<int64_t> parent(N);
vector<int64_t> size_set(N);

void Make(int64_t v)
{
    parent[v] = v;
    size_set[v] = 1;
}

int64_t find(int64_t v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void Union(int64_t a, int64_t b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size_set[a] < size_set[b])
            swap(a, b);
        parent[b] = a;
        size_set[a] += size_set[b];
    }
}

void run_case()
{
    int64_t n, ans = 0;
    cin >> n;
    for (int64_t i = 1; i <= n; ++i)
    {
        Make(i);
    }
    int64_t k;
    cin >> k;
    for (int64_t i = 0; i < k; ++i)
    {
        int64_t x, y;
        cin >> x >> y;
        Union(x, y);
    }
    for (int64_t i = 1; i <= n; ++i)
    {
        if (parent[i] == i)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
        run_case();
}