class Solution {
public:
    int helper(vector<int>& nums,int s, int e, int t){
                if(s>e){
            return -1;
        }
        int mid = s + (e - s) / 2;
        if(nums[mid]==t){
            return mid;
        }
        if(nums[mid]>t){
            return helper(nums,s,mid-1,t);
        }
        else{
            return helper(nums, mid+1,e,t);
        }

    }
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        return helper(nums,start,end,target);
        
    }
};