// Last updated: 28/01/2026, 06:36:45
class Solution {
public:
    string removeOccurrences(string s, string part) { 
        while(s.length()!=0&& s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
        
    }
};