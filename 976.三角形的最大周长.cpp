/*
 * @lc app=leetcode.cn id=976 lang=cpp
 * [976] 三角形的最大周长
 */

// @lc code=start
class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());
        int ans = 0;
        for (int i = 0; i < A.size() - 2; i ++ ) {
            if (A[i] + A[i + 1] > A[i + 2]){
                ans = A[i] + A[i + 1] + A[i + 2];
            }
        }
        return ans;
    }
};
// @lc code=end

