/*
 * @lc app=leetcode.cn id=993 lang=java
 *
 * [993] 二叉树的堂兄弟节点
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    //x 的信息
    int x;
    TreeNode xParent;
    int xDepth;
    boolean xFound = false;
    
    //y 的信息
    int y;
    TreeNode yParent;
    int yDepth;
    boolean yFound = false;

    public boolean isCousins(TreeNode root, int x, int y) {
        //判断两点的深度，以及两个节点的父节点
        //需要层次遍历

        this.x = x;
        this.y = y;
        Queue<TreeNode> nodeQueue = new LinkedList<>();
        Queue<Integer> depthQueue = new LinkedList<>();
        int depth = 0;
        nodeQueue.offer(root);
        depthQueue.offer(depth);
        update(root , null , depth);

        while(!nodeQueue.isEmpty()){
            TreeNode node = nodeQueue.poll();
            depth = depthQueue.poll();
            if(node.left != null){
                nodeQueue.offer(node.left);
                depthQueue.offer(depth+1);
                update(node.left , node , depth+1);
            }
            if(node.right != null){
                nodeQueue.offer(node.right);
                depthQueue.offer(depth+1);
                update(node.right , node , depth+1);
            }
            if(xFound && yFound){
                break;
            }
        }      
        return xDepth == yDepth && xParent != yParent;  
    }

    public void update(TreeNode node , TreeNode parent , int depth){
        if(node.val == x){
            xParent = parent;
            xDepth = depth;
            xFound = true;
        }else if(node.val == y){
            yParent = parent;
            yDepth = depth;
            yFound = true;
        }
    }
}
// @lc code=end

