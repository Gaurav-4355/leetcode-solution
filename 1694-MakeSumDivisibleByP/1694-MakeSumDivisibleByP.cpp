// Last updated: 28/01/2026, 06:36:48
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (int x : nums) total += x;

        int r = total % p;
        if (r == 0) return 0;  // already divisible

        int n = nums.size();
        unordered_map<int,int> last;  
        last[0] = -1;   // prefix before start
        long long prefix = 0;
        int best = n + 1;

        for (int i = 0; i < n; i++) {
            prefix = (prefix + nums[i]) % p;

            int need = (prefix - r) % p;
            if (need < 0) need += p;   // fix negative modulo

            if (last.count(need)) {
                best = min(best, i - last[need]);
            }

            last[prefix] = i;
        }

        return (best <= n - 1) ? best : -1;
    }
};
