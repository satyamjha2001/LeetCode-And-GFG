//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int n) {
        int start=0,end=n,mid,ans;
        if(n<2)
        return n;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid==n/(mid*mid))
             return mid;
            else if(mid<n/(mid*mid))
             {
                 ans=mid;
                 start=mid+1;
             }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends