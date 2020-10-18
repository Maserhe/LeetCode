/*
 * @lc app=leetcode.cn id=5545 lang=cpp
 *
 * [5545] 无矛盾的最佳球队
 */

// @lc code=start
class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        
        vector<pair<int, int> > arg;
        
        for (int i = 0; i < scores.size(); i ++ ){
            arg.push_back({ages[i], scores[i]});
        }
        // 根据年龄排序。
        sort(arg.begin(), arg.end());
        
        // 在 后面的序列中 找到一个 最大上升子序列和。
        int res = 0;
        vector<int> f(scores.size(), 0);
    
        for( int i = 0; i < scores.size() ; i ++ ){
            f[i] = arg[i].second ;
            for( int j = 0 ; j < i ; j ++ ){

                    if(arg[i].second >= arg[j].second ){

                        f[i] = max( f[i] , f[j] + arg[i].second);

                    }
            }
            res = max(res, f[i]);
        }
        
        return res;
    }
};
// @lc code=end

