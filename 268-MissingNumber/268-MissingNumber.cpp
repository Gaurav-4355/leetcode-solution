// Last updated: 28/01/2026, 06:36:58
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
        }
        int asum=0;
          for(int i=0;i<n;i++){
            asum=asum+nums[i];
        }
        return sum-asum;

        
    }
};