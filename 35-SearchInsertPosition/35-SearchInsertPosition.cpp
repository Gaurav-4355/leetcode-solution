// Last updated: 25/11/2025, 23:16:05
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                k++;
            }
          
        }
        return k;
    }
};