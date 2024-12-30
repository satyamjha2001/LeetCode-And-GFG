//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n = arr.size(), start = 0, end = n-1;
        int index;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(arr[mid] == 0)
            {
               index = mid;
                end = mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return n-index;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.countZeroes(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends