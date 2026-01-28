// Last updated: 28/01/2026, 06:36:44
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int sum=0;
          for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
       
      
        return sum%k;
        

        
    }
};