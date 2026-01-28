// Last updated: 28/01/2026, 23:42:52
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return"";
        string prefix=strs[0];
        for(int j=1;j<strs.size();j++){
            while(strs[j].find(prefix)!=0){
               prefix=prefix.substr(0,prefix.size()-1);
            }
            if(prefix.empty()) return"";
        }

       return prefix;  
    }
   
};