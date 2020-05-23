class Solution {
public:
    int ans;
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0;
        depth(root);
        return ans;
    }
    
    int depth(TreeNode *node) {
        if (!node) {
            return 0;
        }
        int left = depth(node->left);
        int right = depth(node->right);
        ans = max(ans, left + right);
        return 1 + max(left, right);
    }
};
