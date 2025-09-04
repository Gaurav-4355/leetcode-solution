// Last updated: 04/09/2025, 11:24:47
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
        int target=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                target++;
            }
            if(target>(n/2)){
                return nums[i];
            }

        }
        }
       return 0; 
    }
};