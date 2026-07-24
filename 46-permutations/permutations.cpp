class Solution {
public:
    void helper(vector<int>& nums,vector<int>& current,vector<vector<int>>&ans,vector<bool> &visited){
        if(current.size()==nums.size()){
            ans.push_back(current);
            return;
        }
       for(int i=0;i<nums.size();i++){
        if(visited[i])
         continue;
        current.push_back(nums[i]);
        visited[i]=true;
        helper(nums,current,ans,visited);
        visited[i]=false;
        current.pop_back();
       }
        
       
  }

    vector<vector<int>> permute(vector<int>& nums) {
         vector<int>current;
         vector<vector<int>>ans;
         vector<bool> visited(nums.size(), false);
         helper(nums,current,ans,visited);
         return ans;
        
    }
};