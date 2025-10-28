// Last updated: 28/10/2025, 22:22:08
#include <string>
#include <cctype> // Needed for tolower and isalnum (even if you write your own)

class Solution {
private: // Changed to private as it's a helper for the class
    // Corrected to check for digit characters ('0' to '9')
    bool isalphanum(char ch) {
        // Check for digits '0' through '9'
        if (ch >= '0' && ch <= '9') {
            return true;
        }
        // Check for letters (case-insensitive)
        if (std::tolower(ch) >= 'a' && std::tolower(ch) <= 'z') {
            return true;
        }
        return false;
    }

public:
    // Added std:: before string for clarity and adherence to standard practice
    bool isPalindrome(std::string s) {
        int st = 0;
        int end = s.length() - 1;
        
        while (st < end) {
            // Skip non-alphanumeric characters from the start (st)
            if (!isalphanum(s[st])) {
                st++;
                continue;
            }
            
            // Skip non-alphanumeric characters from the end (end)
            if (!isalphanum(s[end])) {
                end--;
                continue;
            }
            
            // At this point, s[st] and s[end] are both valid alphanumeric characters.
            // Compare them in a case-insensitive manner.
            if (std::tolower(s[st]) != std::tolower(s[end])) {
                return false; // Found a mismatch!
            }
            
            // If they match, move both pointers inward.
            st++;
            end--;
        }
        
        // If the loop completes without returning false, it's a palindrome.
        return true;
    }
};