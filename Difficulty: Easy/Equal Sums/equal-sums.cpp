//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Function to check if the result vector gives the correct partition.
bool check(vector<int>& arr, vector<int>& result) {
    // Calculate the left sum (sum of elements before the insertion point).
    long long ls = accumulate(arr.begin(), arr.begin() + result[1] - 1, 0LL);

    // Calculate the right sum (sum of elements after the insertion point).
    long long rs = accumulate(arr.begin() + result[1] - 1, arr.end(), 0LL);

    // Adjust the sums based on whether x is added to the left or right subarray.
    if (result[2] == 1) {
        rs += result[0]; // Add x to the right subarray.
    } else {
        ls += result[0]; // Add x to the left subarray.
    }

    // Check if the two sums are equal.
    return ls == rs;
}


// } Driver Code Ends

class Solution {
  public:
    // Function to find the equal sum partition.
    vector<int> EqualSum(vector<int> arr) {
        // Complete the function
        int n=arr.size();
        int minElement=INT_MAX, index=-1, position=1, totalSum=0, prefix=0,suffix=0;
        vector<int> ans(3);
        for (int i = 0; i < n; ++i)
            totalSum += arr[i];
        
        for(int i=0;i<n;++i)
        {
            prefix+=arr[i];
            suffix=totalSum-prefix;
            int diff=abs(suffix-prefix);
            if(diff<minElement)
            {
                minElement=diff;
                index=i+1;
                if(prefix<=suffix)
                    position=2;
                else
                    position=1;
            }
        }
        ans[0]=minElement;
        ans[1]=index+1;
        ans[2]=position;
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts); // Get the number of test cases.

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;

        // Parse the input into the nums array.
        while (ss >> num) {
            nums.push_back(num);
        }

        // Call the EqualSum function from the Solution class.
        Solution ob;
        vector<int> result = ob.EqualSum(nums);

        // Check the result and print "true" or "false" based on the validation.
        if (check(nums, result)) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends