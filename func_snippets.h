#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int lower_bound(vector<int> &v, int &ele)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (v[mid] < ele)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] >= ele)
    {
        return lo;
    }
    else if (v[hi] >= ele)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
int upper_bound(vector<int> &v, int &ele)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (v[mid] <= ele)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] > ele)
    {
        return lo;
    }
    else if (v[hi] > ele)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
double multiply(double x, int n)
{
    double ans = 1;
    for (size_t i = 0; i < n; i++)
    {
        ans *= x;
    }
    return ans;
}
double nth_root(double x, int n, double eps = 1e-8)
{
    double lo = 0;
    double hi = x;
    double mid;
    while (hi - lo > eps)
    {
        mid = (lo + hi) / 2;
        if (multiply(mid, n) < x)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    return lo;
}