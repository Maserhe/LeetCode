/*
 * @lc app=leetcode.cn id=208 lang=cpp
 *
 * [208] 实现 Trie (前缀树)
 */

// @lc code=start
struct Node
{
    bool falg;
    Node * next[26];
    Node() {
        falg = false;
        memset(next, 0, sizeof(next));
    }
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Node();
    }
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node * tmp = root;
        for (char c: word){
            if (tmp->next[c - 'a'] == NULL) {
                tmp->next[c - 'a'] = new Node();
            }
            tmp = tmp->next[c - 'a'];
        }
        tmp->falg = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node * tmp = root;
        for (char c: word){
            if (tmp->next[c - 'a'] == NULL) return false;
            tmp = tmp->next[c - 'a'];
        }
        if (tmp->falg) return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node * tmp = root;
        for (char c: prefix){
            if (tmp->next[c - 'a'] == NULL) return false;
            tmp = tmp->next[c - 'a'];
        }
        return true;
    }

private:
    Node* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end

