//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution1
{
    public:
        int findNum(int n)
        {
          int low=0;
          int high=5*n; //(x/5<=n)
          int ans=low;
          int cnt;
          while(low<=high)
          {
              int mid=(low+high)/2;
              cnt=count_zero(mid);
              if(cnt>=n)
              {
                  ans=mid;
                  high=mid-1;
              }
              else
              low=mid+1;
          }
        }
        
        int count_zero(int x)
        {
            int deno=5;
            int count=0;
            while(x>=deno)
            {
                count+=(x/deno);
                deno*=5;
            }
            return count;
        }
};
class Solution
{
    public:
        int count(int x)
        {
            int temp = 5;
            int val = 0;
            while(temp <= x)
            {
                val += x/temp;
                temp *= 5;
            }
            return val;
        }
        int findNum(int n)
        {
            int l = 0;
            int r = 5*n;
            int mid;
            // f f f t t t t
            while(r - l > 1)
            {
                mid  = (l+r)/2;
                if(count(mid) >= n)
                {
                    r = mid;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if(count(l) >= n)
            {
                return l;
            }
            else
            {
                return r;
            }
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends