/*
 * @lc app=leetcode.cn id=703 lang=cpp
 *
 * [703] 数据流中的第K大元素
 */

// @lc code=start
class KthLargest {
public:
    // 使用一个 multiset
    multiset<int> st;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        st.insert(nums.begin(), nums.end());
    }
    int add(int val) {
        st.insert(val);
        while (st.size() > k) st.erase(st.begin());
        return *st.begin();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

