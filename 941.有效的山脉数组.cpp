/*
 * @lc app=leetcode.cn id=941 lang=cpp
 *
 * [941] 有效的山脉数组
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        bool flag = false;
        if (A.size() < 3) return false;
        if (A[0] > A[1]) return false;

        for (int i = 1; i < A.size(); i ++ )
        {
            if (!flag){
                if (A[i] >= A[i - 1]) continue;
                else flag = true;
            } else {
                if (A[i] < A[i - 1]) continue;
                else return false;
            }
        }
        if (flag && A.size() > 2) return true;
        else return false;
    }
};
// @lc code=end

