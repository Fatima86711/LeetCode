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
    bool isValidBST(TreeNode* root) {
      bool res=  validateBST(root,LLONG_MIN,LLONG_MAX);
       return res;
    }
    //  return validateBST(root, std::numeric_limits<long long>::min(), std::numeric_limits<long long>::max());
    
    bool validateBST(TreeNode*root, long long min,long long max){
        if(root==NULL)
        return true;
        if(root->val <= min || root->val>=max)
        {
                return false;
        }
        return ((validateBST(root->left, min,root->val))&&(validateBST(root->right, root->val, max)));
    }

};