// Last updated: 24/11/2025, 19:01:02
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