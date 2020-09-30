/*
 * @lc app=leetcode.cn id=720 lang=cpp
 *
 * [720] 词典中最长的单词
 */

// @lc code=start
class Solution {
public:
    class Tree{
    public:
        bool word_here;
        vector<Tree*> v;
        Tree(): word_here(false), v(26){};
        static void insert(Tree* t, const string &s){
            for(char c:s){
                if(!t->v[c-'a'])
                    t->v[c-'a'] = new Tree();
                t = t->v[c-'a'];
            }
            t->word_here = true;
        }
        static bool search(Tree* t, const string &s){
            for(char c:s){
                if(!t->v[c-'a']->word_here)
                    return false;
                t = t->v[c-'a'];
            }
            return true;
        }
    };
    string longestWord(vector<string>& words) {
        Tree* root = new Tree();
        for(string &s:words)
            Tree::insert(root, s);
        string longest;
        for(string &s:words)
            if(Tree::search(root, s)){
                if(s.size()>longest.size())
                    longest=s;
                else if(s.size()==longest.size()&&s<longest)
                    longest=s;
            }
        return longest;
    }
};
// @lc code=end

