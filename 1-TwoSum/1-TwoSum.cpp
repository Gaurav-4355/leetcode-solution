// Last updated: 04/09/2025, 11:24:49
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int j;
        int sum;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    return{i,j};
                }

            }
        }
         return {};  
    }
 
};