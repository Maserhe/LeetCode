/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个有序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        /*  暴力写法  绝对超时的
        vector<int> t;
        for(auto e : nums1) t.push_back(e);
        for(auto e : nums2) t.push_back(e);
        sort(t.begin() ,t.end());
        return double(t[i + j >>1] + t[i + j -1 >>1])/2;
        */
        //分治 二分 法

        int l1 = 0  ,r1 = nums1.size() - 1, l2 = 0 ,r2= nums2.size() -1;
        

   



    }
};
// @lc code=end

