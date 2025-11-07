// Last updated: 07/11/2025, 07:13:04
class Solution {
public:
    string removeOccurrences(string s, string part) { 
        while(s.length()!=0&& s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
        
    }
};