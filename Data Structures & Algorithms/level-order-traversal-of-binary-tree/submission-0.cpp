class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(!root)
            return {};

        queue<TreeNode*> q;
        vector<vector<int>> res;
        vector<int> curr;

        q.push(root);
        q.push(nullptr);

        while(!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            if(node == nullptr) {

                res.push_back(curr);
                curr.clear();

                if(!q.empty())
                    q.push(nullptr);
            }
            else {

                curr.push_back(node->val);

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }
        }

        return res;
    }
};