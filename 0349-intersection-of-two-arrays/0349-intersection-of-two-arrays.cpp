class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        
        // Assuming maximum element in nums1 and nums2 is 1000
        int u1[1001] = {0};
        int u2[1001] = {0};
        
        // Populate frequency arrays u1 and u2
        for (int i = 0; i < nums1.size(); ++i)
            u1[nums1[i]]++;
        
        for (int i = 0; i < nums2.size(); ++i)
            u2[nums2[i]]++;
        
        // Check for intersection
        for (int i = 0; i <= 1000; ++i) {
            if (u1[i] > 0 && u2[i] > 0)
                v.push_back(i);
        }
        
        return v;
    }
};
