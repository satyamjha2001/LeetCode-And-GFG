class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> freq(n+1,0);
        vector<int> result(n);
        //brute force approach O(n^3)
        int count;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int ai=0;ai<=i;ai++)
            {
                for(int bi=0;bi<=i;bi++)
                {
                    if(A[ai]==B[bi])
                    {   
                        count++;
                        break;
                    }
                }
            }
            result[i]=count;
        }
        return result;
    }
};