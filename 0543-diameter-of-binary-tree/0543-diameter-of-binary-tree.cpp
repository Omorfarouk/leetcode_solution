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
    int res=0;
    int width(TreeNode*root){
        if(root==NULL) return 0;
        int lh=width(root->left);
        int rh=width(root->right);
        res=max(res, lh+rh+1);
        return 1+ max(lh, rh);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
      width(root);
        return res-1;
    }
};


