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
    
    int height(TreeNode* root) {
        
        if (!root) return 0;
        
        return max(height(root->left), height(root->right)) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        if (!root) return 0;
        
        int leftDia = diameterOfBinaryTree(root->left);
        int rightDia = diameterOfBinaryTree(root->right);
        
        int rootDia = height(root->left) + height(root->right);
        
        return max(leftDia, max(rootDia, rightDia));
    }
};