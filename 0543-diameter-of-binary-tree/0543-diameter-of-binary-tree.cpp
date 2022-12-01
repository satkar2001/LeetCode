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
    int diameterOfBinaryTree(TreeNode* root) {
     
        int maxi=0;
        height(root,maxi);
        return maxi;
        
    }
private:
    int height(TreeNode* node,int &maxi){
        if (!node) return 0;
        
       int lh=height(node->left,maxi);
        int rh=height(node->right,maxi);
        
         maxi=max(maxi,lh+rh);
        
        return 1 + max(lh,rh);
        
    }
    
};