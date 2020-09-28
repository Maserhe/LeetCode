/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */

// @lc code=start
#define x first
#define y second
typedef pair<int, int> PII; // 第一个是数据次数， 第二是第一次出现的 坐标。
using namespace std;
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int, PII> map;
        int ma = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i ++ ) {
            if (!map[nums[i]].x){
                map[nums[i]].x ++ ;
                map[nums[i]].y = i;
            }
            else  map[nums[i]].x ++ ;
            if (ma < map[nums[i]].x){ // 如果遇见度相同的 则更新成最小的。
                ma = map[nums[i]].x;
                ans = i - map[nums[i]].y + 1;
            }
            if (ma == map[nums[i]].x) // 如果遇见度相同的 则更新成最小的。
            {
                ans = min(ans, i - map[nums[i]].y + 1);
            }
        }
        return ans;
    }
};
// @lc code=end

