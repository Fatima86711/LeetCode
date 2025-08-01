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
    bool hasPathSum(TreeNode* root, int targetSum) {
     if(root==NULL){
        return false;
     }   
      targetSum = targetSum -root->val;
     if(((root->left ==NULL)&&(root->right==NULL))&&(targetSum==0)){
        return true;
     }
     bool left = hasPathSum( root->left,  targetSum) ;
     bool right = hasPathSum( root->right,  targetSum) ;
return left || right;
    }
};