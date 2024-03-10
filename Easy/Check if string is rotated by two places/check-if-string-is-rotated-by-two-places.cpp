//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    void reverse(string &s,int start,int end)
    {
        char temp;
        while(start<end)
        {
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
    string leftShift(string str)
    {
        reverse(str,0,1);
        reverse(str,2,str.size()-1);
        reverse(str,0,str.size()-1);
        return str;
    }
    string rightShift(string str)
    {
        reverse(str,0,str.size()-1);
        reverse(str,0,1);
        reverse(str,2,str.size()-1);
        return str;
    }
    
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string leftshift, rightshift;
        leftshift = leftShift(str1);
        if(leftshift == str2)
            return true;
        rightshift = rightShift(str1);
        if(rightshift == str2)
            return true;
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends