// Last updated: 30/01/2026, 22:43:50
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int l = nums1.size();
        int m = nums2.size();
        set<int> uniqueSet;   // ✅ ensures uniqueness

        for (int h = 0; h < l; h++) {
            for (int k = 0; k < m; k++) {
                if (nums1[h] == nums2[k]) {
                    uniqueSet.insert(nums1[h]); // ✅ insert into set
                }
            }
        }

        // Convert set back to vector
        vector<int> nums3(uniqueSet.begin(), uniqueSet.end());
        return nums3;
    }
};
