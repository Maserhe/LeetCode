/*
 * @lc app=leetcode.cn id=295 lang=cpp
 *
 * [295] 数据流的中位数
 */

// @lc code=start
class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> leftQue;   // 大根堆,用于保存较小的那一半元素
    priority_queue<int, vector<int>, greater<int> > rightQue;   // 小根堆,用于保存较大的那一半元素
    //大根堆的堆顶（堆中最大元素）也小于小根堆的堆顶（堆中最小元素）
    MedianFinder() {
    }
    
    void addNum(int num) 
    {
        //左.size=右.size 说明总元素数为偶数，此时将元素放入左边的大根堆
        if(leftQue.size() == rightQue.size())
        {
            //为了保持左右平衡（元素数目差小于等于1）
            //大根堆中插入一个新元素后，需要将调整后的大根堆堆顶拿出来放到小根堆中
            leftQue.push(num);
            rightQue.push(leftQue.top());
            leftQue.pop();
        }
        //此时总元素数为奇数，此时将元素放入右边的小根堆
        else
        {
            //同理
            //小根堆中插入一个新元素后，需要将调整后的小根堆堆顶拿出来放到大根堆中
            rightQue.push(num);
            leftQue.push(rightQue.top());
            rightQue.pop();
        }
    }
    
    double findMedian() 
    {
        double res = 0.0;
        //左.size=右.size 说明总元素数为偶数，中位数即是（左最大+右最小）/2
        if(leftQue.size() == rightQue.size())
            res = ((double)leftQue.top() + (double)rightQue.top()) / 2;
        //总元素数为奇数时，新元素是插入右边小根堆的，所以此时中位数就是小根堆堆顶
        else
            res = rightQue.top();
        return res;
    }
};
/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end

