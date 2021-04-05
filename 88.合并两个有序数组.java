/*
 * @lc app=leetcode.cn id=88 lang=java
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int pos = m + n - 1;
        
        while (pos >= 0) {
            if (n == 0) break;
            if (m == 0) {
                while (n > 0) nums1[pos -- ] = nums2[-- n];
                break;
            }
            if (nums1[m - 1] > nums2[n - 1]) nums1[pos -- ] = nums1[-- m];
            else nums1[pos -- ] = nums2[-- n];
        }
    }
}
// @lc code=end

