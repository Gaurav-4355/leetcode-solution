class Solution {
public:
void helper(vector<int>& nums,int index,vector<int>& news,vector<vector<int>>& ans)
{
    if(index==nums.size()){
        ans.push_back(news);
        return;
        
    }
    news.push_back(nums[index]);
    helper(nums,index+1,news,ans);
    news.pop_back();
    helper(nums,index+1,news,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>news;
        vector<vector<int>> ans;
         helper(nums,0,news,ans);
        return ans;
    }
};