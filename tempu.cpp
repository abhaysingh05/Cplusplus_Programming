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
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    int maxPoints(vector<vector<int>> &points) {
        if (points.size() == 1) return 1;
        int n = points.size();
        int ans = 2;
        for (int i = 0; i < n - 1; i++) {
            int x1 = points[i][0], y1 = points[i][1];
            for (int j = i + 1; j < n; j++) {
                int x2 = points[j][0], y2 = points[j][1];
                double m;
                double c;
                if (x2 - x1 != 0) {
                    m = (double)(y2 - y1) / (x2 - x1);
                    c = y1 - (m * x1);
                    cout << "y=" << fixed << m << "x+" << c << "\n";
                } else {
                    cout << "x=" << x1 << "\n";
                }
                int val = 0;
                for (int k = 0; k < n; k++) {
                    int p1 = points[k][0], p2 = points[k][1];
                    double epsilon = 0.0000001;
                    if (x2 - x1 != 0) {
                        if (abs(p2 - ((m * p1) + c)) < epsilon) {
                            val++;
                            cout << p1 << ',' << p2 << ' ';
                        }
                    } else {
                        if (p1 == x1) {
                            val++;
                            cout << p1 << ',' << p2 << ' ';
                        }
                    }
                }
                cout << "\n";
                ans = max(val, ans);
            }
        }
        return ans;
    }
};
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    int n;
    cin >> n;
    vector<vector<int>> A(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        A[i].push_back(x);
        A[i].push_back(y);
    }
    Solution Ob;
    cout << Ob.maxPoints(A) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}