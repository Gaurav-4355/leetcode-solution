// Last updated: 29/11/2025, 00:24:47
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int max_count = 0;    
5        int current_count = 0; 
6        
7        for(int i = 0; i < nums.size(); i++) {
8            if(nums[i] == 1) {
9                current_count++;
10                max_count = max(max_count, current_count);
11            } else {
12                
13                current_count = 0;
14            }
15        }
16        
17        return max_count;
18    }
19};