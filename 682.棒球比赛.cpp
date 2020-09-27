/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */

// @lc code=start

#include<stdlib.h>
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        int last1 = 0, last2 = 0;
        int sum = 0;
        stack<int> st;

        for (int i = 0; i < n; i ++ ){
            if (ops[i] == "C") {
                st.pop();
            }
            else if (ops[i] == "D" ){
                st.push(st.top() * 2);
            }
            else if (ops[i] == "+"){
                int tmp = st.top();
                st.pop();

                int ne = tmp + st.top();
                st.push(tmp);
                st.push(ne);
            }
            else st.push(atoi(ops[i].c_str()) );
        }

        while (st.size())
        {
            sum += st.top();
            st.pop();
        }
        return sum;

    }
};
// @lc code=end

