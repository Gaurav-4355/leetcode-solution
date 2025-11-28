// Last updated: 28/11/2025, 23:44:12
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n=nums.size();
5        int sum=0;
6        for(int i=0;i<=n;i++){
7            sum+=i;
8        }
9        int asum=0;
10          for(int i=0;i<n;i++){
11            asum=asum+nums[i];
12        }
13        return sum-asum;
14
15        
16    }
17};