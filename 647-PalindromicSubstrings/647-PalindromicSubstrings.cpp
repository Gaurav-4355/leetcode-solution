// Last updated: 27/06/2026, 16:46:09
class Solution {
public:
    int checkpalindrome(string s,int i, int j){
        int count=0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int center=0;center<s.length();center++){
            int i=center;
            int j=center;
            int oddpalindromecount=checkpalindrome(s,i,j);
            i=center;
            j=center+1;
            int evenpalindromecount=checkpalindrome(s,i,j);
            count=count+oddpalindromecount+evenpalindromecount;
        }
        return count;
        
    }
};