// Last updated: 05/09/2025, 10:15:36
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxwater=0;
        int lp=0;
        int ans=0;
        int hp=n-1;
        while(lp<hp){
            int w=hp-lp;
            int ht=min(height[lp],height[hp]);
            int waterarea=w*ht;
            maxwater=max(maxwater,waterarea);
            height[lp]<height[hp]? lp++:hp--;



        }
    return maxwater;    
    
    }

};