//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        int n = arr.size();
        //O(n^3)
        // for(int i=0;i<n-2;i++)
        // {
        //     for(int j=i+1;j<n-1;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             if((arr[i]+arr[j]+arr[k])==target)
        //             {
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;
        
        //O(n^2)
        sort(arr.begin(), arr.end());
        
        for(int i=0;i<n-2;i++)
        {
            //like two pointer
            int start=i+1;
            int end=n-1;
            
            while(start<end)
            {
                int sum = arr[i] + arr[start] + arr[end];
                if(sum==target)
                    return true;
                else if(sum<target)
                    start++;
                else
                    end--;
            }
        }
        return false;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        bool result = solution.hasTripletSum(arr, target);
        cout << (result ? "true" : "false") << "\n";
    }

    return 0;
}
// } Driver Code Ends