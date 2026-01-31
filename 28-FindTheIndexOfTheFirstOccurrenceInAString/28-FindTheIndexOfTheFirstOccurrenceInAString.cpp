// Last updated: 01/02/2026, 00:00:22
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) {
                return i; // Found match
            }
        }
        return -1; // Not found
    }
};