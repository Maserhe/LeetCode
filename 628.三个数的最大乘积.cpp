/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int i,n=nums.size(),max1=-1000,max2=-1000,max3=-1000,min1=1000,min2=1000;
        for(i=0;i<n;i++){


            if(nums[i] > max1){max3 = max2;max2 = max1; max1 = nums[i];}
            else if(nums[i] > max2){max3 = max2; max2 = nums[i];}
            else if(nums[i] > max3) max3 = nums[i];
            if(nums[i] < min1){min2 = min1;min1=nums[i];}
            else if(nums[i] < min2) min2 = nums[i];
        }

        return max(max1*max2*max3,min1*min2*max1);
    }
};
// @lc code=end

