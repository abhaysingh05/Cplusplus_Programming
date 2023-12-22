#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    unordered_set<int> s;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
        while (s.find(m) != s.end())
            m++;
        cout << m << " ";
    }
    cout << '\n';
    return 0;
}