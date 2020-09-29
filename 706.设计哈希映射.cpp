/*
 * @lc app=leetcode.cn id=706 lang=cpp
 *
 * [706] 设计哈希映射
 */

// @lc code=start
class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        my_map = vector<node*> (size, new node(-1, -1));
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int index = key % size;
        node* temp = my_map[index];
        node* last_node;

        while(temp != nullptr) {
            if (temp->my_key == key) {
                temp->my_val = value;
                return;
            }
            last_node = temp;
            temp = temp->next;
        }

        node* new_node = new node(key, value);
        last_node->next = new_node;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int index = key % size;
        node* temp = my_map[index];

        while(temp != nullptr) {
            if (temp->my_key ==key) {
                return temp->my_val;
            }
            temp = temp->next;
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int index = key % size;
        node* temp = my_map[index];

        while(temp != nullptr) {
            if(temp->my_key == key) {
                temp->my_val = -1;
            }
            temp = temp->next;
        }
    }

private:
    struct node{
        
        int my_key;
        int my_val;
        node* next;
        node(int key, int val):my_key(key), my_val(val), next(nullptr){}
    };
    vector<node*> my_map;

    int size = 1000;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
// @lc code=end

