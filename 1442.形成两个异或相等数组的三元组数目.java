/*
 * @lc app=leetcode.cn id=1442 lang=java
 *
 * [1442] 形成两个异或相等数组的三元组数目
 */

// @lc code=start
class Solution {
    public int countTriplets(int[] arr) {
        
        int n = arr.length;
        int ans = 0;

        for (int i = 0; i < arr.length; i ++ ) {
            int temp = arr[i];
            for (int j = i + 1; j < arr.length; j ++ ) {
                temp ^= arr[j];
                if (temp == 0) {
                    ans += (j - i);
                }
            }
        }
        return ans;
    }
}
// @lc code=end

