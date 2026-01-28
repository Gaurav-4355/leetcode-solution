// Last updated: 28/01/2026, 23:42:49
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();  // new length after removal
    }
};