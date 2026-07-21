class Solution {
public:
    bool helper(string &s, int left,int right ){
        if(left>=right){
            return true;
            }
            if(s[left]!=s[right]){
                return false;
            }
        return (s[left]==s[right]&&helper(s,left+1,right-1));
    }

    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0;i<s.size();i++){
           if(isalnum(s[i])){
           char ch= tolower(s[i]);
           temp.push_back(ch);
           }
        }
        return  helper(temp,0,temp.size()-1);
    }
};