/*
 * @lc app=leetcode.cn id=956 lang=cpp
 *
 * [956] 最高的广告牌
 */

// @lc code=start

#include<algorithm>
#include<cstring>
int count[1 << 20 ];
int cn;
class Solution {
public:
    int bfs( int s , int sum , int e ){ //当前迭代到第几层, 当前和 , 最多多少层。

        //递归出口
        if( s == e ){
            
        }

        return 0;
    }
    int tallestBillboard(vector<int>& rods) {
        //优化搜索顺序
        int n = rods.size();
        sort( rods.begin() , rods.end() );
        reverse( rods.begin() , rods.ends() );

        for( int i = 0 ; i < rods.size() ; i ++ ) cn += rods[i];
        cn /= 2;
        cout<<bfs(0 , 0 , n )<<endl;
        return 0;
    }
};
// @lc code=end