/*
 * @lc app=leetcode.cn id=705 lang=cpp
 *
 * [705] 设计哈希集合
 */

// @lc code=start
class MyHashSet {

public:
    
    /** Initialize your data structure here. */
    MyHashSet() {
        mySet = vector<node *>(size,new node(-1, NULL));
    }
    
    void add(int key) {

        // 计算 下标值。
        int pos = key % size;
        if (mySet[pos]->key != -1){
            node * tmp = mySet[pos];
            while (tmp)
            {
                if (tmp->key == key) return;
                tmp = tmp->next;
            }
            // 找不到。则创建新的节点。
            node * ne = new node(key, mySet[pos]);
            mySet[pos] = ne;
    
        }else {     // 插入第一个值
            mySet[pos]->key = key;
        }
    }
    
    void remove(int key) {
        int pos = key % size;
        if (mySet[pos]->key == -1) return;
        else {
            node * tmp = mySet[pos];
            if (tmp->key == key) {  //表头就是要删除的节点。
                if (tmp->next)  mySet[pos]= tmp->next;
                else {
                    tmp->key = -1;
                }
                return;
            }
            else        // 表头不是。
            {
                node * last = tmp;
                tmp = tmp->next;
                while (tmp)
                {
                    if (tmp->key == key){
                        last->next = tmp->next;
                        delete tmp;
                        return;
                    }
                    last = tmp;
                    tmp = tmp->next;
                }
            }
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {

        int pos = key % size;
        if (key == mySet[pos]->key) return true;

        node* tmp = mySet[pos]->next;

        while (tmp)
        {
            if (tmp->key == key) return true;
            tmp = tmp->next;
        }
        return false;
    }

private:
    int size = 1000;
    struct node
    {
        int key;
        node * next;
        node(int k, node *ne): key(k), next(ne){}
    };
    vector<node* > mySet;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
// @lc code=end

