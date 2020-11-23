/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0){		//传入数据可能为空，直接返回0
            return 0;
        }
        sort(points.begin(),points.end(),[](vector<int>& a, vector<int>& b){
            return a[0]<b[0];	//lambda表达式
        });
        int shoot_num=1;
        int shoot_begin=points[0][0];
        int shoot_end=points[0][1];

        for(int i = 1;i < points.size(); i ++ ){
            if(shoot_end >= points[i][0]){
                shoot_begin = points[i][0];
                if(shoot_end>points[i][1])
                    shoot_end=points[i][1];
            }
            else{
                shoot_num++;
                shoot_begin=points[i][0];
                shoot_end=points[i][1];
            }
        }
        return shoot_num;
        
    }
};
// @lc code=end

