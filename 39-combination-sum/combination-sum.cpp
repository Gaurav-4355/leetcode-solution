class Solution {
public:
    void helper(vector<int>& candidates, int target,vector<int>&current,vector<vector<int>>&ans,int index){
        if(target==0){
    ans.push_back(current);
    return;
}
if(target<0){
    return;
}
if(index==candidates.size()){
    return;
}
        current.push_back(candidates[index]);
        helper(candidates,(target-candidates[index]),current,ans,index);
        current.pop_back();
        helper(candidates,target,current,ans,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>>ans;
        helper(candidates,target,current,ans,0);
        return ans;
        
    }
};