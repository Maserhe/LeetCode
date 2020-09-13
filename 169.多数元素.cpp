/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // 方法一 ，超级简单 的 写法， 直接排序， 
        //因为 元素 大于 一半 所以，中间元素 一定最多元素
        
        /*
        sort(nums.begin(), nums.end());
        return nums[nums.size() >> 1];
        */

        // 方法二 ， 哈希 
        unordered_map<int, int> count;

        int cnt = 0;
        int ans;
        for(int num: nums) {
            ++ count[num];
            if (count[num] > cnt ){
                ans = num;
                cnt = count[num];
            }
        }
        return ans;
    }
};
// @lc code=end

