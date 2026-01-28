// Last updated: 28/01/2026, 06:36:37
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  // Step 1: Sort the scores
        int minDiff = INT_MAX;
        
        // Step 2: Sliding window of size k
        for (int i = 0; i <= nums.size() - k; i++) {
            int diff = nums[i + k - 1] - nums[i];
            minDiff = min(minDiff, diff);
        }
        
        return minDiff;  // Step 3: Return smallest difference
    }
};
