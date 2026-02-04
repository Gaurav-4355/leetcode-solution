// Last updated: 04/02/2026, 23:59:53
class Solution {
public:
    int titleToNumber(string columnTitle) {
        long result = 0;
        for (char c : columnTitle) {
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }
};