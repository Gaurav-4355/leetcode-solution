// Last updated: 20/07/2026, 18:39:06
class Solution {
public:
    void reverseHelper(vector<char>& s, int i) {
        // Base case
        if (i >= s.size() / 2)
            return;

        // Swap current element with its mirror element
        swap(s[i], s[s.size() - 1 - i]);

        // Recursive call
        reverseHelper(s, i + 1);
    }

    vector<char> reverseString(vector<char>& s) {
        reverseHelper(s, 0);
        return s;
    }
};