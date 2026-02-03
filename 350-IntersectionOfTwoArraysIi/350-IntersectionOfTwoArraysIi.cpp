// Last updated: 03/02/2026, 23:43:30
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    nums3.push_back(nums1[i]);   // ✅ use push_back
                    nums2[j] = INT_MIN;          // ✅ mark as used
                    break;                       // ✅ avoid duplicate counting
                }
            }
        }
        return nums3;
    }
};