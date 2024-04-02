class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapping[128];  // Array to store mappings, initialized with -1
        fill_n(mapping, 128, -1);  // Initialize array with -1

        for (int i = 0; i < s.length(); i++) {
            char currS = s[i];
            char currT = t[i];

            // If the mapping for currS is uninitialized, set it to currT
            if (mapping[currS] == -1) {
                mapping[currS] = currT;
            } else if (mapping[currS] != currT) {
                return false;  // Mapping is violated, strings are not isomorphic
            }
        }

        // Reset mapping array for checking reverse mapping
        fill_n(mapping, 128, -1);

        for (int i = 0; i < t.length(); i++) {
            char currS = s[i];
            char currT = t[i];

            // If the mapping for currT is uninitialized, set it to currS
            if (mapping[currT] == -1) {
                mapping[currT] = currS;
            } else if (mapping[currT] != currS) {
                return false;  // Mapping is violated, strings are not isomorphic
            }
        }

        return true;  // Both mappings are consistent, strings are isomorphic
    }
};
