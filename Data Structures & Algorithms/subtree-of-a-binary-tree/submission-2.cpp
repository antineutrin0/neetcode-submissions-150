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
    bool dfs2(TreeNode* &root, TreeNode* &subroot){
        if(root== nullptr && subroot== nullptr)
            return true;

        if(root== nullptr ||subroot== nullptr)
            return false;

        if(root->val != subroot->val)
            return false;

        bool left = dfs2(root->left, subroot->left);
        bool right = dfs2(root->right, subroot->right);
        return left && right;
    }
    bool dfs1(TreeNode* &root, TreeNode* &subroot){
            if(!root)
            return false;
        if(root->val == subroot->val) {
            if(dfs2(root, subroot))
                return true;
        }

           bool left=  dfs1(root->left,subroot);
          bool right=  dfs1(root->right,subroot);

          if(left||right)
          return true;
          else
          return false;

    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return dfs1(root, subRoot);
    }
};
