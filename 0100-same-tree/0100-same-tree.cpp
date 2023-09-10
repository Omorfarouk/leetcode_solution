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

//preorder traversal
/*
class Solution {
public:
    vector<int>v1, v2;
    void preorder1(TreeNode *root){
        if(root==NULL) {
           v1.push_back(0);
            return ;
        }
        v1.push_back(root->val);
         preorder1(root->left);
         preorder1(root->right);
    }
    
    void preorder2(TreeNode *root){
           if(root==NULL) {
           v2.push_back(0);
            return ;
        }
        v2.push_back(root->val);
         preorder2(root->left);
         preorder2(root->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        preorder1(p);
        preorder2(q);
        if(v1==v2) return true;
        return false;
    }
};
*/



//Another  Aproach
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p==NULL && q==NULL){
        return true;
    }
      if(p==NULL || q==NULL){
          return false;
      }
        if(p->val!=q->val){
            return false;
        }
     bool left=isSameTree(p->left, q->left);
     bool right=isSameTree(p->right, q->right);
        return left&&right;
    }
};


