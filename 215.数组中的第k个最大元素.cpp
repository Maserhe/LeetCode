/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
class Solution {
public:
    // 手写堆
    vector<int> heap;
    int size;

    int findKthLargest(vector<int>& nums, int k) {
        
        size = nums.size();
        heap.resize(size + 1);
        for (int i = 0; i < size; i ++ ) heap[i + 1] = nums[i];
        for (int i = size / 2; i ; i -- ) down(i);

        for (int i = 1; i < k; i ++ ) {
            heap[1] = heap[size];
            size -- ;
            down(1);
        }
        return heap[1];
    }

    void down(int x) {
        int t = x;
        if (x * 2 <= size && heap[t] < heap[x * 2]) t = x * 2;
        if (x * 2 + 1 <= size && heap[t] < heap[x * 2 + 1]) t = x * 2 + 1;
        if (t != x) {
            swap(heap[x], heap[t]);
            down(t);
        }
    }
    
};
// @lc code=end

