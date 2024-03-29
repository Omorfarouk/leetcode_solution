/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        TreeNode curr=root;
        while(true){
            if(p.val < curr.val && q.val < curr.val){
                curr=curr.left;
            }
            else if(p.val > curr.val && q.val > curr.val){
                curr=curr.right;
            }
            else 
               return curr;
        }
    }
}



//c++
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         TreeNode* cur = root;
//         while (true) {
//             if (p -> val < cur -> val && q -> val < cur -> val) {
//                 cur = cur -> left;
//             } else if (p -> val > cur -> val && q -> val > cur -> val) {
//                 cur = cur -> right;
//             } else {
//                 break;
//             }
//         }
//         return cur;
//     }
// };


