//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
        int n=leftIndex.size();
        vector<int>ans(n);
        
        for(int i=0;i<n;i++)
        {
            int prefix=0;
            int maxi=INT_MIN;
            for(int j=leftIndex[i];j<=rightIndex[i];j++)
            {
                prefix+=arr[j];
                maxi=max(prefix,maxi);
            }
            ans[i]=maxi;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline after t

    while (t--) {
        string line;

        // Read array
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        // Read queries
        getline(cin, line);
        stringstream ssl(line);
        vector<int> leftIndex, rightIndex;
        int left, right;
        while (ssl >> left)
            leftIndex.push_back(left);

        getline(cin, line);
        stringstream ssr(line);
        while (ssr >> right)
            rightIndex.push_back(right);

        Solution obj;
        vector<int> result = obj.maxPrefixes(arr, leftIndex, rightIndex);
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends