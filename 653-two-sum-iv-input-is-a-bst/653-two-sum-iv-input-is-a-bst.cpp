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
    
    void inorder_traversal(TreeNode* root, vector<int>& nums) {
        
        if (!root) return;
        
        inorder_traversal(root->left, nums);
        nums.push_back(root->val);
        inorder_traversal(root->right, nums);
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> nums;
        inorder_traversal(root, nums);
        
        int n = nums.size();
        int i=0, j=n-1;
        
        while (i<j) {
            
            if (nums[i] + nums[j] == k) return true;
            
            if (nums[i] + nums[j] < k) i++;
            else j--;
        }
        
        return false;
    }
};