//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    //complete the function here
    vector<int> fre(26,0);
    for(int i=0;s[i]!='\0';i++)
    {
        fre[s[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++)
    {
        char c = i+'a';
        while(fre[i])
        {
            ans+=c;
            fre[i]--;
        }
    }
    return ans;
}