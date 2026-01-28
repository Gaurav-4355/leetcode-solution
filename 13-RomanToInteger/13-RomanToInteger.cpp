// Last updated: 28/01/2026, 06:37:21
class Solution {
private:
    // Helper function to map Roman character to integer value
    int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

public:
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();
        
        // Loop through the string *except* for the last character
        for (int i = 0; i < n - 1; ++i) {
            int currentVal = getValue(s[i]);
            int nextVal = getValue(s[i+1]);
            
            // Subtractive Rule Check: If current is smaller than next (e.g., "I" < "V")
            if (currentVal < nextVal) {
                total -= currentVal; // Subtract (e.g., for IV, subtract 1)
            } else {
                total += currentVal; // Add (e.g., for VI, add 5)
            }
        }
        
        // The last character is *always* added, as there is no next character to compare against.
        total += getValue(s[n - 1]);
        
        return total;
    }
};