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
void merge(vector<int>& A, int l, int r, int mid)
{
    int l_size = mid - l + 1;
    int r_size = r - mid;
    int L_arr[l_size + 1];
    int R_arr[r_size + 1];
    L_arr[l_size] = R_arr[r_size] = INT32_MAX;
    for (int i = 0; i < l_size; i++)
    {
        L_arr[i] = A[l + i];
    }
    for (int i = 0; i < r_size; i++)
    {
        R_arr[i] = A[mid + 1 + i];
    }
    int li = 0, ri = 0;
    for (int i = l; i <= r; i++)
    {
        if (L_arr[li] <= R_arr[ri])
        {
            A[i] = L_arr[li++];
        }
        else
        {
            A[i] = R_arr[ri++];
        }
    }
}
void mergeSort(vector<int>& A, int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(A, l, mid);
    mergeSort(A, mid + 1, r);
    merge(A, l, r, mid);
}