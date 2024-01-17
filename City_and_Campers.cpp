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
multiset<int64_t> sizes;

void Make(int64_t v)
{
    parent[v] = v;
    size_set[v] = 1;
    sizes.insert(1);
}

int64_t find(int64_t v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void merge(int64_t a,int64_t b)
{
    sizes.erase(sizes.find(size_set[a]));
    sizes.erase(sizes.find(size_set[b]));
    sizes.insert(size_set[a]+size_set[b]);
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
        merge(a,b);
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
    int64_t q;
    cin >> q;
    for (int64_t i = 0; i < q; ++i)
    {
        int64_t x,y;
        cin >> x >> y;
        Union(x,y);
        cout << *(prev(sizes.end())) - *(sizes.begin()) << "\n";
    }
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