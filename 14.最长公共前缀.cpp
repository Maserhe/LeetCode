/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
#include<vector>
#include<string>
#include<iostream>
using namespace std;
const int N= 10000;



class Solution {
public:
    int son[N][26],cnt[N],idx =0;
    
    string longestCommonPrefix(vector<string>& strs) {
        
        for( auto s : strs) insert(s);
        int sum = query(strs.size());
        char answer[20] = "";
        for(int i = 0 ; i < sum ;  i ++ ){
            answer[i]=strs[0][i];
        }
        return answer;
    }
    void insert(string s){

        int p = 0;
     
        
        for( int i = 0 ; i < s.size() ; i ++ ) 
        {
            int u  = s[i] - 'a';
            if(!son[p][u]) son[p][u] = ++idx;

            p= son[p][u];

        
            cout<<p<<endl;
            cnt[p]+=1;
            cout<<cnt[p]<<endl;

        }
    }
    int  query(int x){
        int p = 1;
        while(cnt[p]==x){
            p++;
        }

        return p-1;
    }
};
// @lc code=end

