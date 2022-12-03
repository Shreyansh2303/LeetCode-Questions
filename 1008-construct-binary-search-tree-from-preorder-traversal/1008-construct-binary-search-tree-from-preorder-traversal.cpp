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
    
    TreeNode* construct(vector<int>& preorder, int& i, int upperBound) {
        
        if (i == preorder.size() or preorder[i] > upperBound) return NULL;
        
        TreeNode* root = new TreeNode(preorder[i++]);
        
        root->left = construct(preorder, i, preorder[i-1]);
        root->right = construct(preorder, i, upperBound);
        
        return root;
    }
    
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int i = 0;
        
        TreeNode* finalAns = construct(preorder, i, INT_MAX);
        
        return finalAns;
    }
};