/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), p, q;
        if (n <= 2) return n;
        p = q = 2;
        for (; q < n; q++) {
            if (nums[q] == nums[p - 2]) {
                continue;
            }
            nums[p] = nums[q];
            p++;
        }
        return p;
    }
};
// @lc code=end

