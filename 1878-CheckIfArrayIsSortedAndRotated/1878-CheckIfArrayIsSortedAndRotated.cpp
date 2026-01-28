// Last updated: 28/01/2026, 06:36:47

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            // Compare current element with the next one, wrapping around using modulo
            if(nums[i] > nums[(i+1) % n]) {
                count++;
            }
        }
        
        return count <= 1;
    }
};