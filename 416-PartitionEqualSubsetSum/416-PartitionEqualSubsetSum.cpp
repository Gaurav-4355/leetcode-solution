// Last updated: 04/07/2026, 16:04:49
class Solution {
public:
    bool solve(vector<int>& nums, int index, int target, int ans, vector<vector<int>>& dp) {
        if(ans == target) return true;
        if(index >= nums.size() || ans > target) return false;

        if(dp[index][ans] != -1) return dp[index][ans];

        bool include = solve(nums, index+1, target, ans + nums[index], dp);
        bool exclude = solve(nums, index+1, target, ans, dp);

        return dp[index][ans] = include || exclude;
    }

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 2 != 0) return false;
        int target = sum / 2;

        vector<vector<int>> dp(nums.size(), vector<int>(target+1, -1));
        return solve(nums, 0, target, 0, dp);
    }
};
