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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        return helper(nums, 0, n-1);
    }
    
    
    TreeNode* helper(vector<int>& nums, int i, int j) {
        
        if (i>j) return NULL;
        
        int mid = i + (j-i)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        
        TreeNode* leftTree = helper(nums, i, mid-1);
        TreeNode* rightTree = helper(nums, mid+1, j);
        
        root->left = leftTree;
        root->right = rightTree;
        
        return root;
    }
};