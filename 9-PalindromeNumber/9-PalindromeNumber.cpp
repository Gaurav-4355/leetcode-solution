// Last updated: 28/01/2026, 06:37:23
class Solution {
public:
    bool isPalindrome(int x) {
        long long tot=0,left;
        if(x<0){
            return false;
        }
         int k=x;
        while(k>0){
           
            left=k%10;
            tot=tot*10+left;
            k=k/10;
        }
        if(tot==x){
            return true;
        }
            else{
                return false;
            }
        
      return {};  
    }
};