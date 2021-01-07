/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 省份数量
 */

// @lc code=start
class Solution {
    private:
    bool st[210];
    int sum=0;

public:
    int findCircleNum(vector<vector<int>>& M) 
    {
        for(int i=0;i<M.size();i++)
        {
            if(!st[i])
            {
                st[i]=true;
                bfs(i,M);
                sum++;
            }
        }
        return sum;
    }

    void bfs(int x,vector<vector<int>>& M)
    {
        queue<int> q;
        q.push(x);

        while(!q.empty())
        {
            int t = q.front();
            q.pop();
            for(int i=0;i<M[t].size();i++)
            {
                if(!st[i]&&M[t][i]==1)
                {
                    st[i]=true;
                    q.push(i);
                }
            }
        }
    }
};
// @lc code=end

