// Last updated: 02/02/2026, 00:02:42
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while (columnNumber > 0) {
            columnNumber--; // adjust for 1-indexing
            char c = 'A' + (columnNumber % 26);
            result = c + result; // prepend
            columnNumber /= 26;
        }
        return result;
    }
};