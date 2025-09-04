// Last updated: 04/09/2025, 11:24:50
#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int csum = 0;
        int maxsum = INT_MIN;

        for (size_t i = 0; i < nums.size(); ++i) {
            csum += nums[i];
            maxsum = std::max(csum, maxsum);
            if (csum < 0) {
                csum = 0;
            }
        }

        return maxsum;
    }
};
