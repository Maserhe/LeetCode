/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    // 使用两个栈 进行 维护
    stack<int> s;
    stack<int> min_s;

    MinStack() {
        min_s.push(__INT_MAX__); //推入最大值。 // 这里我写 0x3f3f3f3f 不知道为啥，不对。
    }
    
    void push(int x) {
        s.push(x);
        min_s.push(min(min_s.top(),x)); // 一直保存 最小值。
    }
    
    void pop() {
        s.pop();
        min_s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min_s.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

