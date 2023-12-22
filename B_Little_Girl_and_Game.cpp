#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    string s;
    cin >> s;
    int hsh[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s.at(j) == (char)('a' + i))
                hsh[i]++;
        }
    }
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hsh[i] & 1) 
            odd_count++;
        else
            even_count++;
    }
    if ((odd_count & 1) || odd_count == 0)
        cout << "First\n";
    else
        cout << "Second\n";
    return 0;
}