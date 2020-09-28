/*
 * @lc app=leetcode.cn id=690 lang=cpp
 *
 * [690] 员工的重要性
 */

// @lc code=start
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int ans = 0;
        stack<int> st;
        st.push(id);
        while (st.size())
        {   
            int t = st.top();
            st.pop();


            for (Employee * i: employees){
                if (t == i->id){
                    ans += i->importance;
                    for (int s: i->subordinates){
                        st.push(s);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

