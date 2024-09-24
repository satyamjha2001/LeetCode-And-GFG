//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n = arr.size();
        int d = (arr[n-1] - arr[0])/n;
        
        int start = 0;
        int end = n-1;
        int mid;
        
        while(start <= end)
        {
            mid = start+(end-start)/2;
            if(arr[0] + mid*d == arr[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        
        return arr[start] - d;


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
    }
    return 0;
}

// } Driver Code Ends