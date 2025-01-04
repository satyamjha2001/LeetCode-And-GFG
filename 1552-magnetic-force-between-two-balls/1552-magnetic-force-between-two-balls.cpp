class Solution {
public:
    bool canWePlace(vector<int>& position, int force, int m, int n) {
        int last = position[0], countMagnets = 1;
        for (int i = 1; i < n; i++) {
            if (position[i] - last >= force) {
                countMagnets++;
                last = position[i];
            }
        }
        if (countMagnets >= m)
            return true;
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        // sort for finding force.
        sort(position.begin(), position.end());
        // start and end is minimum to maximum distance
        int start = 1, end = position[n - 1] - position[0];
        int place;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (canWePlace(position, mid, m, n)) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return end; // we return end because it have the answer.
    }
};