/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
public:
    /** Initialize your data structure here. */

    // 需要两个队列模拟 栈。
    // 两个队列相互交替 使用

    queue<int> q1, q2;

    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if (q1.size()){
            q1.push(x);
        }
        else q2.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
       
       if (q1.size()) {
           while (q1.size() > 1){
               q2.push(q1.front());
               q1.pop();
           }
           // 还剩下一个元素。
           int t = q1.front();
           q1.pop();
           return t;
       }
       else {
           while (q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
           }
           int t = q2.front();
           q2.pop();
           return t;
       }

    }
    
    /** Get the top element. */
    int top() {

        if (q1.size()) {
           while (q1.size() > 1){
               q2.push(q1.front());
               q1.pop();
           }
           // 还剩下一个元素。
           int t = q1.front();
           q1.pop();
           q2.push(t);
           return t;
       }
       else {
           while (q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
           }
           int t = q2.front();
           q2.pop();
           q1.push(t);
           return t;
       }
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if (q1.empty() && q2.empty()) return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

