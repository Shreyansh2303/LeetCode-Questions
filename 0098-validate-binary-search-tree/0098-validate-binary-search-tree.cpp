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
    
    void inorder(TreeNode* root, vector<int>& ans) {
        
        if (!root) return;
        
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    
public:
    bool isValidBST(TreeNode* root) {
        
        vector<int> sorted;
        inorder(root, sorted);
        
        for (int i=1; i<sorted.size(); i++) {
            if (sorted[i-1] >= sorted[i]) return false;
        }
        
        return true;
    }
};