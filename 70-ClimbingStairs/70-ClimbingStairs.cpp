// Last updated: 28/01/2026, 06:37:08
class Solution {
public:
    int dp[46];

    int climbStairs(int n) {
        if (n <= 1) return 1;
        if (dp[n] != 0) return dp[n];

        dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return dp[n];
    }
};
