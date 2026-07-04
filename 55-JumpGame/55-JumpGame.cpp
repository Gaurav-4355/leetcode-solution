// Last updated: 04/07/2026, 17:03:48
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i > maxReach) return false;  // agar current index tak pahunch hi nahi paaye
            maxReach = max(maxReach, i + nums[i]);  // update max reach
        }
        return true;
    }
};
