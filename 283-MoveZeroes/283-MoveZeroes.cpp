// Last updated: 28/11/2025, 23:34:26
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        
5      int j=nums.size()-1;
6      for(int i=0;i<j;i++){
7        if(nums[i]==0){
8            swap(nums[i],nums[i+1]);
9        }
10        for(int k=0;k<j;k++){
11            if(nums[k]==0){
12                swap(nums[k],nums[k+1]);
13            }
14        }
15
16      }
17
18 
19       
20    }
21};