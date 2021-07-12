import java.util.Stack;

import org.graalvm.compiler.nodes.calc.IsNullNode;

/*
 * @lc app=leetcode.cn id=232 lang=java
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {

    /** Initialize your data structure here. */

    public Stack<Integer> inStack;
    public Stack<Integer> outStack;

    public MyQueue() {
        inStack = new Stack<>();
        outStack =  new Stack<>();
    }
    
    /** Push element x to the back of queue. */
    public void push(int x) {
        inStack.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    public int pop() {
        if (outStack.empty()) {
            while (!inStack.empty()) outStack.push(inStack.pop());
        }
        return outStack.pop();
    }
    
    /** Get the front element. */
    public int peek() {
        if (outStack.empty()) {
            while (!inStack.empty()) outStack.push(inStack.pop());
        }
        return outStack.peek();
    }
    
    /** Returns whether the queue is empty. */
    public boolean empty() {
        return inStack.empty() && outStack.empty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
// @lc code=end

