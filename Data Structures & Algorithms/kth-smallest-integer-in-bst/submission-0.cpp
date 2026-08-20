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

    void kth(TreeNode* node, stack<int>&stk,int k){
        if(!node)
        return;
        kth(node->left,stk,k);
        if(stk.size()==k)
        return;
        stk.push(node->val);
        kth(node->right,stk,k);
        return;
    }
public:
    int kthSmallest(TreeNode* root, int k) {

        stack<int>stk;
        kth(root,stk,k);
        return stk.top();
    }
};
