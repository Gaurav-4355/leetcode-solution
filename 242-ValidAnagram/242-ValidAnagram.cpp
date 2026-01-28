// Last updated: 28/01/2026, 06:36:59
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        // Anagrams must have the same length
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> m;

        // Count character frequencies in string s
        for (char c : s) {
            m[c]++;
        }

        // Decrement character frequencies for string t
        for (char c : t) {
            m[c]--;
            // Early exit if a character in t appears more times than in s
            // or if a character in t is not present in s at all.
            if (m[c] < 0) {
                return false;
            }
        }

        // After processing both strings (and assuming equal length),
        // all counts in the map must be zero if they are anagrams.
        // The early exit for `m[c] < 0` handles most cases.
        // If lengths are equal and no count went negative, all must be zero.
        // This final loop explicitly checks the remaining condition.
        for (auto const& pair : m) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};