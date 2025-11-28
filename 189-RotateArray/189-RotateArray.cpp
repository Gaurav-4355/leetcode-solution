// Last updated: 29/11/2025, 00:31:30
1class Solution {
2public:
3    void reverseArr(vector<int>& nums, int start, int end) {
4        while (start < end) {
5            swap(nums[start++], nums[end--]);
6        }
7    }
8
9    void rotate(vector<int>& nums, int k) {
10        int n = nums.size();
11        k = k % n;                   // handle k > n
12
13        reverseArr(nums, 0, n - 1);      // 1. reverse whole array
14        reverseArr(nums, 0, k - 1);      // 2. reverse first k elements
15        reverseArr(nums, k, n - 1);      // 3. reverse remaining part
16    }
17};
18