// Last updated: 29/01/2026, 23:07:58
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // just increment and return
                return digits;
            }
            digits[i] = 0;     // set to 0 and continue carry
        }
        
        // If all digits were 9, we need an extra digit at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};