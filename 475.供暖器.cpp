/*
 * @lc app=leetcode.cn id=475 lang=cpp
 *
 * [475] 供暖器
 */

// @lc code=start
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {

        // 方法一，暴力没意思，
        // 方法二， 二分。
        int res = 0;
        sort(heaters.begin(), heaters.end());

        int n = heaters.size();

        for (int i: houses){

            int l = 0, r = n;

            // 找到 距离 i 第一个 大于 i 的 暖气炉。
            while (l < r)
            {
                int mid = l + r >> 1;
                if (heaters[mid] >= i) r = mid;
                else l = mid + 1;
            }

            // 找到 i 距离 上个 暖气的 距离。如果没有就是 无穷大。
            // 别把 l 写成 i 了，找了好久的错误。
            int m1 = (l == 0)? __INT_MAX__: abs(i - heaters[l - 1]);
            int m2 = (r == n)? __INT_MAX__: abs(heaters[l] - i);
            res = max( res, min(m1, m2));
        }
        return res;
    }
};
// @lc code=end

