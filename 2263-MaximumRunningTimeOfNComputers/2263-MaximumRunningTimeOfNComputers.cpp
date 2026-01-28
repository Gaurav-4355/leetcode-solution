// Last updated: 28/01/2026, 06:36:41
// C++ binary search solution for LeetCode 2141
class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for (long long b : batteries) sum += b;
        long long lo = 0, hi = sum / n, ans = 0;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            // check feasibility
            __int128 total = 0; // avoid overflow for sum of min(b, mid)
            for (long long b : batteries) {
                total += min<long long>(b, mid);
                // small optimization: break if already large enough (optional)
            }
            if (total >= (__int128)mid * n) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }
};
