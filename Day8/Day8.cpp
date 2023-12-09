/*94. Binary Tree Inorder Traversal*/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        helper(root, result);
        return result;
    }

    void helper(TreeNode* root, vector<int>& result) {
        if (root != nullptr) {
            helper(root->left, result);
            result.push_back(root->val);
            helper(root->right, result);
        }
    }
};

/*Runtime
4 ms
Beats
33.83%
Memory
8.7 MB
Beats
81.67%*/