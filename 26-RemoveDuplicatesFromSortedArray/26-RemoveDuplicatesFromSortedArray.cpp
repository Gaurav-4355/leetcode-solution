// Last updated: 28/01/2026, 06:37:17
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag=1;

        for(int i=1;i<nums.size();i++){
          
            if(nums[i]!=nums[flag-1]){
                nums[flag++]=nums[i];
            }
         
          }
                            
        
        return flag;
    }
};