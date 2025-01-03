//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        if(K>N)
            return -1;
        int start=0, end=0, count, ans,num;
        for(int i=0;i<N;i++)
        {
            start=max(start, arr[i]);
            end+=arr[i];
        }
        int mid;
        while(start<=end)
        {
            mid= start+(end-start)/2;
            count=1;
            num=0;
            for(int i=0;i<N;i++)
            {
                num+=arr[i];
                if(num>mid)
                {
                    count++;
                    num=arr[i];
                }
            }

            if(count<=K)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
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
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends