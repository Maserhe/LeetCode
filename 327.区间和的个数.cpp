/*
 * @lc app=leetcode.cn id=327 lang=cpp
 *
 * [327] 区间和的个数
 */

// @lc code=start
class Solution {
public:
    /* .lower<=presum-x<=upper 变换为persum-upper<=x<=presum-lower;
        因此，x的查找范围是可以确定的。
        2.我们求前缀和，同时利用map对前缀和计数，
        同时在map中查找上边界（persum-upper）的迭代器，
        下边界（presum-lower）的迭代器，然后对迭代器内的计数加和
    */
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        map<long long , int> countmap;
        countmap[0] = 1;

        long long sum = 0;
        int count = 0;
        for (int i = 0; i < nums.size();i++){
            sum += nums[i];
            map<long long, int>::iterator firstiter;
            map<long long, int>::iterator seconditer;
            seconditer = countmap.upper_bound(sum - lower);
            firstiter = countmap.lower_bound(sum - upper);

            while(firstiter != seconditer){
                count += firstiter->second;
                firstiter++;
            }
            countmap[sum]++;
        }
        return count;
    }
};
// @lc code=end

