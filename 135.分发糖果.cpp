/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */

// @lc code=start
class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> l(ratings.size()), r(ratings.size());
        l[0] = 1;
        r[ratings.size() - 1] = 1;
        int ret = 0;
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i - 1] < ratings[i]) {
                l[i] = l[i - 1] + 1;
            } else {
                l[i] = 1;
            }
        }
        for (int i = ratings.size() - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                r[i] = r[i + 1] + 1;
            } else {
                r[i] = 1;
            }
        }
        for (int i = 0 ; i < ratings.size(); i++) {
            ret += max(l[i], r[i]);
        }
        return ret;
    }
};
// @lc code=end

