class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        //so the main thing is in derived array every element of original is twice.
        //if derived is 1,1,0 then we must have 1 derived from 1 0 and another 1 is 1 0
        //we dont care 0 because 0 is derived from 0 0 or 0 1 so carefully observing 
        //if 1 is even number of times then we return true
        //or sum of derived array is even we return true otherwise false.

        int sum = 0;
        for(int num: derived)
        {
            sum+=num;
        }
        if(sum%2==0)
            return true;
        return false;
    }
};