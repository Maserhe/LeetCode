/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // 枚举 每个点， 剩下的那个点。靠 二分 来 查找。
        for (int i = 0; i < numbers.size(); i ++ ) {
            int low = i + 1, high = numbers.size() ;
            while (low < high) {
                int mid = high + low >> 1;
                if (numbers[mid] == target - numbers[i]) {
                    return {i + 1, mid + 1};
                } else if (numbers[mid] > target - numbers[i]) {
                    high = mid; //  warnning :: l = mid 需要加 一 
                } else {
                    low = mid + 1;
                }
            }
        }
        return {-1, -1};
    }
};
// @lc code=end

