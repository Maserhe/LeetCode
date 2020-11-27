/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;

        for (int i = 0; i < A.size();  i ++ )
            for (int j = 0; j < B.size(); j ++ )
                map1[A[i] +  B[j]] ++ ;
        
        for (int i = 0; i < C.size(); i ++ ) 
            for (int j = 0; j < D.size(); j ++ )
                map2[C[i] + D[j]] ++ ;
        
        int ans = 0;

        for (auto i: map1) {
            if (map2.find(-i.first) != map2.end()) ans = ans +  i.second*map2[-i.first];
        }
        return ans;
    }
};
// @lc code=end

