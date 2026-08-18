/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    bool flg=0;
public:
    int dfs(TreeNode* root){
       if(!root){
        return 0;
       }
       int left=dfs(root->left);
       int right=dfs(root->right);
       if(abs(left-right)>1)
       flg=1;
       return 1+max(left,right);
    }
public:
    bool isBalanced(TreeNode* root) {

        dfs(root);
        if(flg)
        return false;
        else
        return true;
    }
};
