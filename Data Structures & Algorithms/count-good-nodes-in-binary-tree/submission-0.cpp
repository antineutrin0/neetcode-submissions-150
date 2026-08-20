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
    public:
    int countGoodNodes(TreeNode* &root,int maxVal){
       if (root == nullptr)
            return 0;

        int left = countGoodNodes(root->left, max(maxVal, root->val));
        int right = countGoodNodes(root->right, max(maxVal, root->val));

        int current = 0;
        if (root->val >= maxVal)
            current = 1;

        return left + right + current;
    }
public:
    int goodNodes(TreeNode* root) {

        int maxleft=root->val;
        int maxright=root->val;
       int count= countGoodNodes(root ,root->val);
        return count;
        
    }
};
