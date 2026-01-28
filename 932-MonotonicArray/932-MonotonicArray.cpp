// Last updated: 28/01/2026, 06:36:55
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true;
        bool dec = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]) inc = false;
            if(nums[i] > nums[i-1]) dec = false;
        }
        return inc || dec;
    }
};  