/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // 方法一 ， 暴力解法
    
        vector<int> a;
        int size = nums.size();
        for(int i = 0; i < size ; i ++ )
            for( int j = i + 1 ;j <size ; j ++ )
                if(nums[i] + nums[j] == target ){
                    a.push_back(i);
                    a.push_back(j);
                }
        return a;
    

       // 方法二 ， 二分 ,我特么·傻逼了，这是没有排序的数。不能用方法二。
       /*
       int n = nums.size();
       if (!n) return {-1, -1};
       for (int i = 0; i < n - 1; i ++ ){
           int l = i + 1, r = n;
           while (l < r)
           {
               int mid = l + r >> 1;
               if (nums[i] == target - nums[mid]) {
                   return {i , mid };
               }
               else if(nums[i] < target - nums[mid]) l = mid + 1;
               else r = mid;

           }
          
       }
       return {-1, -1};
       */
    }
};
// @lc code=end

