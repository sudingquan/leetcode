/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int  p = 0, q = k - 1, sum = 0, mmax;
        for (int i = 0; i <= k - 1; i++) {
            sum += nums[i];
        }
        mmax = sum;
        for (; q < nums.size(); p++, q++) {
            if (p == 0) continue;
            sum = sum - nums[p - 1] + nums[q];
            if (sum > mmax) mmax = sum;
        }
        return 1.0 * mmax / k;
    }
};
// @lc code=end

