/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个有序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int nums1Size = int(nums1.size());
        int nums2Size = int(nums2.size());

        //确保数组1是较短的数组
        if (nums1Size > nums2Size)
        {
            return findMedianSortedArrays(nums2, nums1);
        }

        // Ci 为第i个数组的割,比如C1为2时表示第1个数组只有2个元素。lMaxi为第i个数组割后的左元素。rMini为第i个数组割后的右元素。
        int lMax1, lMax2, rMin1, rMin2, c1, c2, lo = 0, hi = 2 * nums1Size; //我们目前是虚拟加了'#'所以数组1是2*n长度

        while (lo <= hi)
        { //二分法
            c1 = (lo + hi) / 2;
            c2 = nums1Size + nums2Size - c1;

            lMax1 = (c1 == 0) ? INT_MIN : nums1[(c1 - 1) / 2];
            rMin1 = (c1 == 2 * nums1Size) ? INT_MAX : nums1[c1 / 2];
            lMax2 = (c2 == 0) ? INT_MIN : nums2[(c2 - 1) / 2];
            rMin2 = (c2 == 2 * nums2Size) ? INT_MAX : nums2[c2 / 2];

            if (lMax1 > rMin2)
            {
                hi = c1 - 1;
            }
            else if (lMax2 > rMin1)
            {
                lo = c1 + 1;
            }
            else
            {
                break;
            }
        }        
        return (max(lMax1, lMax2) + min(rMin1, rMin2)) / 2.0;
    }
};

// @lc code=end

