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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>temp;
        helperFunction(root, temp);
        return temp;
    }
    void helperFunction(TreeNode*root, vector<int>&temp){
        if(root==NULL) return;
        temp.push_back(root->val);
        helperFunction(root->left, temp);
        helperFunction(root->right, temp);
    }
};