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
    
    void construct(vector<int>& preorder, TreeNode* finalAns, int n) {
        
        if (n==1) {
            finalAns->val = preorder[n-1];
            return;
        }
        
        
        
        construct(preorder, finalAns, n-1);
        
        
        
        TreeNode* itr = finalAns;
        
        while (true) {
            
            if (preorder[n-1] < itr->val) {
                if (itr->left) itr = itr->left;
                else {
                    TreeNode* temp = new TreeNode;
                    temp->val = preorder[n-1];
                    itr->left = temp;
                    break;
                }
            }
            
            else if (preorder[n-1] > itr->val) {
                if (itr->right) itr = itr->right;
                else {
                    TreeNode* temp = new TreeNode;
                    temp->val = preorder[n-1];
                    itr->right = temp;
                    break;
                }
            }
        }
    }
    
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* finalAns = new TreeNode;
        construct(preorder, finalAns, preorder.size());
        
        
        return finalAns;
    }
};