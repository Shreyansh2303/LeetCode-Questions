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
        
        int lheight = height(root->left);
        int rheight = height(root->right);
        
        return 1+max(lheight, rheight);
    }
    
public:
    bool isBalanced(TreeNode* root) {
        
        if (!root) return true;
        
        int lheight = height(root->left);
        int rheight = height(root->right);
        
        return abs(lheight-rheight) <= 1 and isBalanced(root->left) and isBalanced(root->right);
    }
};